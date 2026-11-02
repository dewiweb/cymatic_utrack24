// rea decompile_all
// name: FUN_005e9470
// address: 0x5e9470
// body: available
// range: 0x5e9470-0x5e94f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e9470(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  undefined4 *in_EDX;
  
  iVar1 = *(int *)(in_ECX + 0x68);
  iVar5 = 7;
  iVar2 = *(int *)(iVar1 + 0x78);
  if (iVar2 == 0) {
    return 0;
  }
  if (in_EDX != (undefined4 *)0x0) {
    iVar3 = *(int *)(iVar2 + 0x68);
    piVar4 = (int *)(*(int *)(*(int *)(iVar2 + 0x40) + 0x68) + 0x50);
    if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
      iVar5 = *(int *)(iVar1 + 0x7c);
    }
    *in_EDX = *(undefined4 *)(*(int *)(iVar3 + 0xc + iVar5 * 4) + 8);
    piVar4 = *(int **)(iVar3 + 0xc + iVar5 * 4);
    iVar5 = piVar4[1] + 7;
    in_EDX[1] = ((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3) + *piVar4;
    in_EDX[2] = 0;
    in_EDX[3] = *(undefined4 *)(iVar2 + 0x2c);
    in_EDX[4] = *(undefined4 *)(iVar2 + 0x30);
    in_EDX[5] = *(undefined4 *)(iVar2 + 0x34);
    in_EDX[6] = *(undefined4 *)(iVar2 + 0x38);
    in_EDX[7] = *(undefined4 *)(iVar2 + 0x3c);
  }
  *(undefined4 *)(iVar1 + 0x78) = 0;
  return 1;
}

