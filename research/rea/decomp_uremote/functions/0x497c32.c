// rea decompile_all
// name: FUN_00497c32
// address: 0x497c32
// body: available
// range: 0x497c32-0x497d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x497c6f to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00497c32(void)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  
  bVar1 = false;
  if (*(int *)(in_EDX + 0x204) == 0) {
    if (in_EAX == 0) {
      in_EAX = *(int *)(in_EDX + 0x208);
    }
    if ((in_EAX == 3) || ((in_EAX == 2 && ((*(uint *)(in_EDX + 0xd0) & 0x20000000) != 0)))) {
      iVar2 = FUN_00497b5a();
      if (iVar2 == 0) goto LAB_00497cd9;
    }
    else {
      FUN_00495a5d();
    }
  }
  else {
    iVar2 = FUN_00497b5a();
    if (iVar2 == 0) {
LAB_00497cd9:
      in_EAX = 1;
    }
    else {
      iVar2 = (**(code **)(in_EDX + 0x204))();
      if (iVar2 < 0) goto LAB_00497c6d;
      if (iVar2 == 0) {
        if (in_EAX < 2) {
          if (*(int *)(in_EDX + 0x208) < 2) {
            FUN_0049146c();
            FUN_004913a9();
          }
          in_EAX = 2;
        }
      }
      else {
        in_EAX = 1;
        bVar1 = true;
      }
    }
  }
  if ((in_EAX == 3) || ((in_EAX == 2 && ((*(uint *)(in_EDX + 0xd0) & 0x20000000) != 0)))) {
    iVar2 = *(int *)(in_EDX + 0x240);
    if (iVar2 == 0) {
LAB_00497d0c:
      FUN_0049971d();
      bVar1 = true;
    }
    else if (iVar2 != 1) {
      if (iVar2 != 2) {
        *(int *)(in_EDX + 0x240) = iVar2 + -1;
        goto LAB_00497d0c;
      }
      *(undefined4 *)(in_EDX + 0x240) = 1;
      FUN_004914ad();
    }
  }
  if (*(int *)(in_EDX + 0x250) != 0) {
    FUN_00491789();
  }
  *(int *)(in_EDX + 0x250) = 0;
  if ((bVar1) || ((*(uint *)(in_EDX + 0xd0) & 0x20000000) != 0)) {
    return;
  }
LAB_00497c6d:
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

