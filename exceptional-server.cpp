try {
      cout << Server::compute(A, B) << endl;
    } catch (bad_alloc& e) {
      cout << "Not enough memory" << endl;
    } catch (exception& e) {
      cout << "Exception: " << e.what() << endl;
    } catch (int e) {
      cout << "Other Exception" << endl;
    }
