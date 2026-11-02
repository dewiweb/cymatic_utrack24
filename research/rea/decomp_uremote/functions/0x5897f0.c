// rea decompile_all
// name: FUN_005897f0
// address: 0x5897f0
// body: available
// range: 0x5897f0-0x589cda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005897f0(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  
  if ((int)(param_2 - *param_1) < 0x14) {
    uVar3 = (uint)param_1 & 0xffffff00;
  }
  else {
    FUN_005813b0(param_1);
    *(undefined2 *)(in_ECX + 0x28) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    cVar2 = FUN_00507db0(param_1,param_2);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else if ((((*(ushort *)(in_ECX + 0x28) & 7) == 0) || (2 < (*(ushort *)(in_ECX + 0x28) & 7))) ||
            (uVar3 = FUN_00507db0(param_1,param_2), (uVar3 & 0xff) != 0)) {
      *param_1 = *param_1 + 3 & 0xfffffffc;
      switch(*(ushort *)(in_ECX + 0x28) & 0xff8) {
      case 8:
        if ((int)(param_2 - *param_1) < 0x10) {
          uVar3 = param_2 - *param_1 & 0xffffff00;
        }
        else {
          *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined2 *)(in_ECX + 0x50) = *(undefined2 *)*param_1;
          *param_1 = *param_1 + 2;
          *(undefined2 *)(in_ECX + 0x52) = *(undefined2 *)*param_1;
          *param_1 = *param_1 + 2;
          *(undefined2 *)(in_ECX + 0x54) = *(undefined2 *)*param_1;
          *param_1 = *param_1 + 2;
          *(undefined2 *)(in_ECX + 0x56) = *(undefined2 *)*param_1;
          *param_1 = *param_1 + 2;
          uVar3 = FUN_00596500(in_ECX + 0x70,param_1,param_2);
          if ((uVar3 & 0xff) == 0) {
            uVar3 = uVar3 & 0xffffff00;
          }
          else {
            *param_1 = *param_1 + 1 & 0xfffffffe;
            if ((int)(param_2 - *param_1) < 2) {
              uVar3 = CONCAT31((int3)(param_2 - *param_1 >> 8),1);
            }
            else {
              *(undefined2 *)(in_ECX + 0x60) = *(undefined2 *)*param_1;
              uVar3 = *param_1;
              *param_1 = uVar3 + 2;
              uVar3 = CONCAT31((int3)(uVar3 + 2 >> 8),1);
            }
          }
        }
        break;
      case 0x10:
        if ((int)(param_2 - *param_1) < 0x1a) {
          uVar3 = param_2 - *param_1 & 0xffffff00;
        }
        else {
          puVar1 = (undefined4 *)*param_1;
          *(undefined4 *)(in_ECX + 0x50) = *puVar1;
          *(undefined4 *)(in_ECX + 0x54) = puVar1[1];
          *param_1 = *param_1 + 8;
          puVar1 = (undefined4 *)*param_1;
          *(undefined4 *)(in_ECX + 0x58) = *puVar1;
          *(undefined4 *)(in_ECX + 0x5c) = puVar1[1];
          *param_1 = *param_1 + 8;
          puVar1 = (undefined4 *)*param_1;
          *(undefined4 *)(in_ECX + 0x60) = *puVar1;
          *(undefined4 *)(in_ECX + 100) = puVar1[1];
          *param_1 = *param_1 + 8;
          *(undefined2 *)(in_ECX + 0x4c) = *(undefined2 *)*param_1;
          *param_1 = *param_1 + 2;
          uVar3 = FUN_00596500(in_ECX + 0x70,param_1,param_2);
        }
        break;
      case 0x18:
        if ((int)(param_2 - *param_1) < 0x1c) {
          uVar3 = param_2 - *param_1 & 0xffffff00;
        }
        else {
          *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 100) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined2 *)(in_ECX + 0x4c) = *(undefined2 *)*param_1;
          *param_1 = *param_1 + 2;
          *(undefined1 *)(in_ECX + 0x50) = *(undefined1 *)*param_1;
          *param_1 = *param_1 + 1;
          *param_1 = *param_1 + 1;
          uVar3 = FUN_00596500(in_ECX + 0x70,param_1,param_2);
        }
        break;
      case 0x20:
        if ((int)(param_2 - *param_1) < 0x1c) {
          uVar3 = (uint)param_1 & 0xffffff00;
        }
        else {
          *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 100) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)*param_1;
          *param_1 = *param_1 + 4;
          *(undefined2 *)(in_ECX + 0x4c) = *(undefined2 *)*param_1;
          *param_1 = *param_1 + 2;
          *(undefined1 *)(in_ECX + 0x50) = *(undefined1 *)*param_1;
          *param_1 = *param_1 + 1;
          *param_1 = *param_1 + 1;
          uVar3 = FUN_00596500(in_ECX + 0x70,param_1,param_2);
        }
        break;
      default:
        uVar3 = FUN_00596500(in_ECX + 0x70,param_1,param_2);
      }
    }
    else {
      uVar3 = uVar3 & 0xffffff00;
    }
  }
  return uVar3;
}

