// rea decompile_all
// name: FUN_004013cf
// address: 0x4013cf
// body: available
// range: 0x4013cf-0x4014a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004013cf(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  short *psVar8;
  short *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = (short *)0x0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 <= *(int *)(param_1 + 0xc)) {
    if (0x2aaaaa9 < iVar3) {
      local_8 = 0x40;
      goto LAB_00401491;
    }
    iVar7 = (iVar3 >> 2) + 4 + iVar3;
    if ((iVar7 < iVar3) || (0x2aaaaaa < iVar7)) {
      iVar7 = 0x2aaaaaa;
    }
    uVar2 = FUN_00411976(0x30,*(undefined4 *)(param_1 + 0x14),&local_8);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    if (local_8 != 0) goto LAB_00401491;
    *(int *)(param_1 + 0x10) = iVar7;
  }
  psVar1 = *(short **)(param_1 + 0x14);
  psVar4 = psVar1 + *(int *)(param_1 + 0xc) * 0x18;
  local_c = psVar4;
  while (psVar1 < local_c) {
    psVar4 = psVar4 + -0x18;
    if ((*psVar4 < param_2) || ((*psVar4 == param_2 && (param_3 == *(int *)(param_1 + 0x18)))))
    break;
    psVar5 = local_c + -0x18;
    psVar6 = psVar4;
    psVar8 = local_c;
    for (iVar3 = 0xc; local_c = psVar5, iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
      psVar6 = psVar6 + 2;
      psVar8 = psVar8 + 2;
    }
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  _memset(local_c,0,0x30);
  *local_c = (short)param_2;
  *(undefined1 *)((int)local_c + 0xd) = (undefined1)param_3;
LAB_00401491:
  *param_5 = local_c;
  return local_8;
}

