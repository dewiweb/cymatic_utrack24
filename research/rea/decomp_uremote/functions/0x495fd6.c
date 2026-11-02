// rea decompile_all
// name: FUN_00495fd6
// address: 0x495fd6
// body: available
// range: 0x495fd6-0x496106 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x495ff5 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00495fd6(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  int unaff_EBX;
  undefined1 local_18 [8];
  char local_10;
  char local_f;
  undefined1 local_e;
  undefined1 local_d;
  byte local_c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (((*(uint *)(unaff_EBX + 0x28) & 1) == 0) && (param_2 == 0xd)) {
    *(uint *)(unaff_EBX + 0x28) = *(uint *)(unaff_EBX + 0x28) | 1;
    FUN_00495a35(local_18,0xd);
    FUN_00495a5d();
    iVar2 = FUN_004958cb();
    uVar3 = FUN_004958cb();
    uVar4 = (uint)local_c;
    *(byte *)(unaff_EBX + 0x108) = local_c;
    *(undefined1 *)(unaff_EBX + 0x220) = local_d;
    *(undefined1 *)(unaff_EBX + 0x234) = local_e;
    *(int *)(unaff_EBX + 0xb4) = iVar2;
    *(undefined4 *)(unaff_EBX + 0xb8) = uVar3;
    *(char *)(unaff_EBX + 0x10c) = local_10;
    *(char *)(unaff_EBX + 0x10b) = local_f;
    if (local_f == '\x02') {
      *(undefined1 *)(unaff_EBX + 0x10f) = 3;
    }
    else if (local_f == '\x04') {
      *(undefined1 *)(unaff_EBX + 0x10f) = 2;
    }
    else if (local_f == '\x06') {
      *(undefined1 *)(unaff_EBX + 0x10f) = 4;
    }
    else {
      *(undefined1 *)(unaff_EBX + 0x10f) = 1;
    }
    bVar1 = local_10 * *(char *)(unaff_EBX + 0x10f);
    *(byte *)(unaff_EBX + 0x10e) = bVar1;
    if (bVar1 < 8) {
      uVar5 = (uint)bVar1 * iVar2 + 7 >> 3;
    }
    else {
      uVar5 = (uint)(bVar1 >> 3) * iVar2;
    }
    *(uint *)(unaff_EBX + 0xc4) = uVar5;
    FUN_00498d6a();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,param_1,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

