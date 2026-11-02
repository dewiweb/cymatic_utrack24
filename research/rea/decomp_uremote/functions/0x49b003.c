// rea decompile_all
// name: FUN_0049b003
// address: 0x49b003
// body: available
// range: 0x49b003-0x49b1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b003(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  int local_58;
  int local_54;
  int local_50;
  
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(unaff_EBX + 0x34) != 0) {
    FUN_0049113b();
    FUN_00491216();
    if (*(int *)(unaff_EBX + 0x34) == 0x49444154) {
      *(char **)(unaff_EBX + 0x50) = "in use by IDAT";
      goto LAB_0049b1cf;
    }
    *(undefined4 *)(unaff_EBX + 0x34) = 0;
  }
  local_54 = *(int *)(unaff_EBX + 0x78);
  local_50 = *(int *)(unaff_EBX + 0x7c);
  local_58 = *(int *)(unaff_EBX + 0x84);
  iVar4 = *(int *)(unaff_EBX + 0x80);
  if (param_1 == 0x49444154) {
    if ((*(byte *)(unaff_EBX + 0x2c) & 1) == 0) {
      uVar5 = (uint)(*(char *)(unaff_EBX + 0x10a) != '\b');
    }
    else {
      uVar5 = *(uint *)(unaff_EBX + 0x88);
    }
  }
  else {
    local_54 = *(int *)(unaff_EBX + 0x8c);
    iVar4 = *(int *)(unaff_EBX + 0x94);
    local_50 = *(int *)(unaff_EBX + 0x90);
    local_58 = *(int *)(unaff_EBX + 0x98);
    uVar5 = *(uint *)(unaff_EBX + 0x9c);
  }
  if (param_2 < 0x4001) {
    for (uVar2 = 1 << ((char)iVar4 - 1U & 0x1f); param_2 + 0x106 <= uVar2; uVar2 = uVar2 >> 1) {
      iVar4 = iVar4 + -1;
    }
  }
  if (((*(byte *)(unaff_EBX + 0x2c) & 2) != 0) &&
     ((((*(int *)(unaff_EBX + 0xa0) != local_54 || (*(int *)(unaff_EBX + 0xa4) != local_50)) ||
       (*(int *)(unaff_EBX + 0xa8) != iVar4)) ||
      ((*(int *)(unaff_EBX + 0xac) != local_58 || (*(uint *)(unaff_EBX + 0xb0) != uVar5)))))) {
    iVar3 = FUN_00468f2f();
    if (iVar3 != 0) {
      FUN_00491216();
    }
    *(uint *)(unaff_EBX + 0x2c) = *(uint *)(unaff_EBX + 0x2c) & 0xfffffffd;
  }
  *(undefined4 *)(unaff_EBX + 0x38) = 0;
  *(undefined4 *)(unaff_EBX + 0x3c) = 0;
  *(undefined4 *)(unaff_EBX + 0x44) = 0;
  *(undefined4 *)(unaff_EBX + 0x48) = 0;
  if ((*(byte *)(unaff_EBX + 0x2c) & 2) == 0) {
    iVar4 = FUN_0046851b(local_54,local_50,iVar4,local_58,uVar5);
    if (iVar4 == 0) {
      *(uint *)(unaff_EBX + 0x2c) = *(uint *)(unaff_EBX + 0x2c) | 2;
      iVar4 = 0;
      goto LAB_0049b1b7;
    }
  }
  else {
    iVar4 = FUN_004686da();
LAB_0049b1b7:
    if (iVar4 == 0) {
      *(int *)(unaff_EBX + 0x34) = param_1;
      goto LAB_0049b1cf;
    }
  }
  FUN_0048f554();
LAB_0049b1cf:
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

