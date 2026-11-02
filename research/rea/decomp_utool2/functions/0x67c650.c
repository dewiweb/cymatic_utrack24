// rea decompile_all
// name: FUN_0067c650
// address: 0x67c650
// body: available
// range: 0x67c650-0x67c728 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0067c650(int param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  int aiStack_28 [2];
  undefined4 uStack_20;
  uint local_c;
  
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  param_2 = param_2 - in_ECX[2];
  if ((-1 < param_2) && (param_2 < in_ECX[4])) {
    *(undefined1 *)(in_ECX + 7) = 1;
    if (param_5 < 1) {
      *(undefined4 *)(*in_ECX + in_ECX[6] * param_2 * 4) = 0;
    }
    else {
      uStack_20 = 0x67c6a8;
      iVar1 = -(param_5 * 8 + 0x10);
      iVar3 = 0;
      param_5 = param_5 + -1;
      local_c = 0;
      if (-1 < param_5) {
        do {
          uVar4 = (uint)*param_3;
          param_3 = param_3 + param_4;
          if (uVar4 != local_c) {
            *(int *)(&stack0xffffffe8 + iVar3 * 4 + iVar1) = param_1 << 8;
            iVar3 = iVar3 + 2;
            *(uint *)(&stack0xffffffe4 + iVar3 * 4 + iVar1) = uVar4;
            local_c = uVar4;
          }
          param_1 = param_1 + 1;
          param_5 = param_5 + -1;
        } while (-1 < param_5);
        if (local_c != 0) {
          *(int *)(&stack0xffffffe8 + iVar3 * 4 + iVar1) = param_1 * 0x100;
          iVar3 = iVar3 + 2;
          *(undefined4 *)(&stack0xffffffe4 + iVar3 * 4 + iVar1) = 0;
        }
      }
      *(undefined1 **)((int)&uStack_20 + iVar1) = &stack0xffffffe4 + iVar1;
      *(int *)((int)aiStack_28 + iVar1 + 4) = param_2;
      *(int *)(&stack0xffffffe4 + iVar1) = iVar3 >> 1;
      *(undefined4 *)((int)aiStack_28 + iVar1) = 0x67c713;
      FUN_0067ca70();
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

