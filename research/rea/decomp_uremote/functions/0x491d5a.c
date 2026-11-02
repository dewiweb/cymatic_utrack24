// rea decompile_all
// name: FUN_00491d5a
// address: 0x491d5a
// body: available
// range: 0x491d5a-0x492022 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491d5a(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (in_EAX != 0) {
    iVar1 = FUN_0048f50c(0x49444154);
    if (iVar1 == 0) {
      FUN_004988e9();
    }
    if ((*(char *)(in_EAX + 0x10b) == '\x03') &&
       ((int)(uint)*(ushort *)(in_EAX + 0xfc) < *(int *)(in_EAX + 0x100))) {
      FUN_00491371();
    }
    do {
      iVar2 = FUN_004959a1();
      iVar1 = *(int *)(in_EAX + 0xd0);
      if (iVar1 == 0x49484452) {
        FUN_00495fd6(param_1,iVar2);
      }
      else if (iVar1 == 0x49454e44) {
        FUN_0049624b(iVar2);
      }
      else {
        iVar3 = FUN_0048f50c(iVar1);
        if (iVar3 == 0) {
          if (iVar1 == 0x49444154) {
            if ((iVar2 != 0) || ((*(uint *)(in_EAX + 0x28) & 0x2000) != 0)) {
              FUN_00491371();
            }
            FUN_00495a5d();
          }
          else if (iVar1 == 0x504c5445) {
            FUN_00496107(param_1);
          }
          else if (iVar1 == 0x624b4744) {
            FUN_00496e65();
          }
          else if (iVar1 == 0x6348524d) {
            FUN_004963f7();
          }
          else if (iVar1 == 0x67414d41) {
            FUN_00496282(param_1);
          }
          else if (iVar1 == 0x68495354) {
            FUN_00497018();
          }
          else if (iVar1 == 0x6f464673) {
            FUN_004971ef();
          }
          else if (iVar1 == 0x7043414c) {
            FUN_004972ce();
          }
          else if (iVar1 == 0x7343414c) {
            FUN_004974d5();
          }
          else if (iVar1 == 0x70485973) {
            FUN_00497113();
          }
          else if (iVar1 == 0x73424954) {
            FUN_00496302();
          }
          else if (iVar1 == 0x73524742) {
            FUN_0049654f(param_1);
          }
          else if (iVar1 == 0x69434350) {
            FUN_004965f7(param_1,iVar2);
          }
          else if (iVar1 == 0x73504c54) {
            FUN_00496a75();
          }
          else if (iVar1 == 0x74455874) {
            FUN_00497721(param_1,iVar2);
          }
          else if (iVar1 == 0x74494d45) {
            FUN_00497658();
          }
          else if (iVar1 == 0x74524e53) {
            FUN_00496c8e();
          }
          else if (iVar1 == 0x7a545874) {
            FUN_0049781c(param_1,iVar2);
          }
          else if (iVar1 == 0x69545874) {
            FUN_0049797f();
          }
          else {
            FUN_00497c32(param_1);
          }
        }
        else {
          if ((iVar1 == 0x49444154) && ((iVar2 != 0 || ((*(uint *)(in_EAX + 0x28) & 0x2000) != 0))))
          {
            FUN_00491371();
          }
          FUN_00497c32(param_1);
          if (iVar1 == 0x504c5445) {
            *(uint *)(in_EAX + 0x28) = *(uint *)(in_EAX + 0x28) | 2;
          }
        }
      }
    } while ((*(byte *)(in_EAX + 0x28) & 0x10) == 0);
  }
  return;
}

