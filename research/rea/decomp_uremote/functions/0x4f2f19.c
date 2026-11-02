// rea decompile_all
// name: FUN_004f2f19
// address: 0x4f2f19
// body: available
// range: 0x4f2f19-0x4f3021 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f2f19(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_20;
  uint uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  int local_c;
  
  _memset(&local_50,0,0x30);
  local_50 = 0x30;
  if (DAT_0095d6b8 != (code *)0x0) {
    iVar2 = (*DAT_0095d6b8)(param_1,&local_50);
    if (iVar2 != 0) {
      FUN_004f1b01();
      local_18 = 0;
      uStack_14 = 0;
      local_c = FUN_004f2de3(unaff_ESI);
      uVar6 = uStack_14;
      uVar5 = local_18;
      if ((local_c != 0) && (local_48 == 3)) {
        if ((local_4c != 1) &&
           ((*(int *)(unaff_ESI + 0x54) != 0 || (*(int *)(unaff_ESI + 0x50) != 0)))) {
          uVar1 = *(uint *)(unaff_ESI + 0x54);
          local_20 = *(undefined4 *)(unaff_ESI + 0x50);
          uStack_1c = uVar1 & 0x7fffffff;
          local_18 = 0;
          fVar4 = (float)((-(float10)(longlong)(((ulonglong)local_2c & 0x80000000) << 0x20) +
                          (float10)(CONCAT44(local_2c,local_30) & 0x7fffffffffffffff)) /
                         (-(float10)(longlong)(((ulonglong)uVar1 & 0x80000000) << 0x20) +
                         (float10)(*(ulonglong *)(unaff_ESI + 0x50) & 0x7fffffffffffffff)));
          uStack_14 = uVar1 & 0x80000000;
          uVar3 = FUN_004f0c50(fVar4,uVar5,uVar6);
          FUN_004ed63f(local_c,uVar3,fVar4,uVar5,uVar6);
        }
        *(undefined4 *)(unaff_ESI + 0x50) = local_30;
        *(uint *)(unaff_ESI + 0x54) = local_2c;
        return 1;
      }
    }
  }
  return 0;
}

