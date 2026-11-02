// rea decompile_all
// name: FUN_005d6f30
// address: 0x5d6f30
// body: available
// range: 0x5d6f30-0x5d702b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d6f30(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  iVar4 = *(int *)(*(int *)(in_ECX[0x10] + 4) + 0x1c);
  FUN_005e92f0();
  uVar3 = *in_EDX;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[4] = uVar3;
  in_ECX[3] = uVar3;
  in_ECX[5] = in_EDX[1];
  iVar2 = FUN_005eabc0();
  if (iVar2 != 0) {
    return 0xffffff79;
  }
  iVar2 = FUN_005eabc0();
  if (iVar2 != -1) {
    in_ECX[10] = iVar2;
    piVar1 = *(int **)(iVar4 + 0x20 + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      iVar4 = *piVar1;
      in_ECX[7] = iVar4;
      if (iVar4 == 0) {
        in_ECX[6] = 0;
        in_ECX[8] = 0;
      }
      else {
        uVar3 = FUN_005eabc0();
        in_ECX[6] = uVar3;
        iVar4 = FUN_005eabc0();
        in_ECX[8] = iVar4;
        if (iVar4 == -1) {
          return 0xffffff78;
        }
      }
      in_ECX[0xc] = in_EDX[4];
      in_ECX[0xd] = in_EDX[5];
      in_ECX[0xe] = in_EDX[6];
      in_ECX[0xf] = in_EDX[7];
      in_ECX[0xb] = in_EDX[3];
      in_ECX[9] = 0;
      *in_ECX = 0;
      return 0;
    }
  }
  return 0xffffff78;
}

