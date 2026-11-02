// rea decompile_all
// name: FUN_00507840
// address: 0x507840
// body: available
// range: 0x507840-0x507ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00507840(uint *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 *in_ECX;
  
  if (100 < (int)(param_2 - *param_1)) {
    *in_ECX = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    *param_1 = *param_1 + 2;
    FUN_00507d00(in_ECX + 2,param_1);
    FUN_00507d00(in_ECX + 8,param_1);
    *(undefined4 *)(in_ECX + 0xe) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x12) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x16) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x1a) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x1e) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x22) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x26) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x2a) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    in_ECX[0x2e] = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    in_ECX[0x2f] = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    cVar1 = FUN_00507db0(param_1,param_2);
    if ((cVar1 != '\0') && (*param_1 < param_2)) {
      return CONCAT31((int3)(*param_1 >> 8),1);
    }
  }
  *in_ECX = 0xffff;
  FUN_00503b90();
  FUN_00503b90();
  *(undefined4 *)(in_ECX + 0xe) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x12) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x16) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1a) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x1e) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x22) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x26) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2a) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  uVar2 = FUN_005063e0();
  return uVar2 & 0xffffff00;
}

