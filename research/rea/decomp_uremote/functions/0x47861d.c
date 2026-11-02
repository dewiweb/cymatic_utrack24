// rea decompile_all
// name: FUN_0047861d
// address: 0x47861d
// body: available
// range: 0x47861d-0x4786d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0047861d(int param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int *unaff_ESI;
  int aiStack_20 [2];
  undefined4 uStack_18;
  uint local_c;
  
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  param_1 = param_1 - unaff_ESI[2];
  if ((-1 < param_1) && (param_1 < unaff_ESI[4])) {
    *(undefined1 *)(unaff_ESI + 7) = 1;
    if (param_4 < 1) {
      *(undefined4 *)(*unaff_ESI + unaff_ESI[6] * param_1 * 4) = 0;
    }
    else {
      uStack_18 = 0x47866b;
      iVar1 = -(param_4 * 8 + 0x10);
      iVar3 = 0;
      param_4 = param_4 + -1;
      local_c = 0;
      if (-1 < param_4) {
        do {
          uVar4 = (uint)*param_2;
          param_2 = param_2 + param_3;
          if (uVar4 != local_c) {
            *(int *)(&stack0xffffffec + (iVar3 + 1) * 4 + iVar1) = in_ECX << 8;
            iVar3 = iVar3 + 2;
            *(uint *)(&stack0xffffffec + iVar3 * 4 + iVar1) = uVar4;
            local_c = uVar4;
          }
          in_ECX = in_ECX + 1;
          param_4 = param_4 + -1;
        } while (-1 < param_4);
        if (local_c != 0) {
          *(int *)(&stack0xffffffec + (iVar3 + 1) * 4 + iVar1) = in_ECX * 0x100;
          iVar3 = iVar3 + 2;
          *(undefined4 *)(&stack0xffffffec + iVar3 * 4 + iVar1) = 0;
        }
      }
      *(undefined1 **)((int)&uStack_18 + iVar1) = &stack0xffffffec + iVar1;
      *(int *)((int)aiStack_20 + iVar1 + 4) = param_1;
      *(int *)(&stack0xffffffec + iVar1) = iVar3 >> 1;
      *(undefined4 *)((int)aiStack_20 + iVar1) = 0x4786bf;
      FUN_0047810a();
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

