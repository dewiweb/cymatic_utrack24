// rea decompile_all
// name: FUN_0048dfd4
// address: 0x48dfd4
// body: available
// range: 0x48dfd4-0x48e0e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048dfd4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  short *psVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_190;
  int local_18c;
  undefined1 local_188 [256];
  byte local_88 [128];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  iVar7 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar8 = (param_2 >> 2) * 0x20 + 4;
  iVar3 = (param_3 >> 2) * 0x20 + 4;
  iVar6 = (in_ECX >> 3) * 0x20 + 2;
  uVar1 = FUN_0048dd38(iVar8,iVar6,iVar3,local_188);
  FUN_0048dec4(param_1,iVar8,iVar6,iVar3,uVar1,local_188,local_88);
  pbVar5 = local_88;
  piVar4 = (int *)(iVar7 + (param_2 >> 2) * 0x10);
  local_18c = 4;
  do {
    local_190 = 8;
    iVar7 = ((in_ECX >> 3) * 0x100 + (param_3 >> 2) * 4) * 2;
    do {
      psVar2 = (short *)(*piVar4 + iVar7);
      iVar3 = 4;
      do {
        *psVar2 = *pbVar5 + 1;
        psVar2 = psVar2 + 1;
        pbVar5 = pbVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar7 = iVar7 + 0x40;
      local_190 = local_190 + -1;
    } while (local_190 != 0);
    piVar4 = piVar4 + 1;
    local_18c = local_18c + -1;
  } while (local_18c != 0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

