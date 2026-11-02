// rea decompile_all
// name: FUN_005e8880
// address: 0x5e8880
// body: available
// range: 0x5e8880-0x5e8970 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_005e8880(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  int aiStack_ac [35];
  undefined4 uStack_20;
  
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uStack_20 = 0x5e889f;
  iVar1 = *(int *)(in_ECX + 0x14);
  aiStack_ac[3] = 0x5e88b1;
  *(undefined4 *)(in_ECX + 0x1c) = 1;
  if ((0x40 < iVar1 - *(int *)(in_ECX + 0x30)) &&
     (iVar7 = 0, iVar4 = in_ECX, 0 < *(int *)(*(int *)(in_ECX + 4) + 4))) {
    do {
      iVar5 = 0;
      if (0 < *(int *)(in_ECX + 0x14)) {
        do {
          iVar4 = *(int *)(in_ECX + 0x14) - iVar5;
          aiStack_ac[(iVar5 - iVar1) + 4] =
               *(int *)(*(int *)(*(int *)(in_ECX + 8) + iVar7 * 4) + -4 + iVar4 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(in_ECX + 0x14));
      }
      iVar5 = *(int *)(in_ECX + 0x14);
      iVar2 = *(int *)(in_ECX + 0x30);
      aiStack_ac[3 - iVar1] = iVar4;
      aiStack_ac[2 - iVar1] = iVar5 - iVar2;
      aiStack_ac[1 - iVar1] = 0x5e890a;
      FUN_005e1860();
      iVar4 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x30);
      aiStack_ac[3 - iVar1] = *(int *)(in_ECX + 0x30);
      aiStack_ac[2 - iVar1] = (int)(aiStack_ac + (iVar4 - iVar1) + 4);
      aiStack_ac[1 - iVar1] = iVar4 * 4;
      aiStack_ac[-iVar1] = 0x5e892b;
      FUN_005e16f0();
      iVar5 = 0;
      iVar4 = extraout_ECX;
      if (0 < *(int *)(in_ECX + 0x14)) {
        do {
          iVar6 = *(int *)(in_ECX + 0x14) - iVar5;
          iVar4 = *(int *)(*(int *)(in_ECX + 8) + iVar7 * 4);
          iVar2 = iVar5 - iVar1;
          iVar5 = iVar5 + 1;
          *(int *)(iVar4 + -4 + iVar6 * 4) = aiStack_ac[iVar2 + 4];
        } while (iVar5 < *(int *)(in_ECX + 0x14));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(int *)(in_ECX + 4) + 4));
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

