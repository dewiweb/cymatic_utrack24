// rea decompile_all
// name: FUN_00424e25
// address: 0x424e25
// body: available
// range: 0x424e25-0x424f25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00424e25(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_10;
  uint local_c;
  char local_5;
  
  uVar1 = param_1[2];
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      iVar2 = FUN_00424d16();
      return iVar2;
    }
    if (uVar1 != 3) {
      if (uVar1 == 4) {
        uVar5 = 1;
      }
      else {
        if (uVar1 != 5) {
          return 3;
        }
        iVar2 = FUN_00424d16();
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar5 = 0;
      }
      iVar2 = FUN_00424d52(param_1,param_2,uVar5);
      return iVar2;
    }
  }
  local_5 = uVar1 == 1;
  if (param_1[1] < *param_1) {
    return 3;
  }
  iVar2 = (uint)param_1[1] - (uint)*param_1;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  local_c = iVar2 + 2;
  uVar5 = FUN_00411976(4,0,&local_10);
  *(undefined4 *)(param_1 + 0xe) = uVar5;
  if (local_10 == 0) {
    iVar2 = FUN_004111b5();
    uVar4 = 0;
    if (iVar2 != 0) {
      return iVar2;
    }
    if (local_c != 0) {
      do {
        if (local_5 == '\0') {
          uVar3 = FUN_00411277();
          uVar3 = uVar3 & 0xffff;
        }
        else {
          uVar3 = FUN_004112c7();
        }
        *(uint *)(*(int *)(param_1 + 0xe) + uVar4 * 4) = *(int *)(param_1 + 4) + uVar3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_c);
    }
    FUN_00411249();
    return 0;
  }
  return local_10;
}

