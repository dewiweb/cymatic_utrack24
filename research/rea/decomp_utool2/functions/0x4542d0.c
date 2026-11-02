// rea decompile_all
// name: FUN_004542d0
// address: 0x4542d0
// body: available
// range: 0x4542d0-0x454363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004542d0(byte *param_1,byte *param_2)

{
  int *piVar1;
  byte *pbVar2;
  uint in_ECX;
  byte *pbVar3;
  byte bVar4;
  
  FUN_0045c2c0(**(undefined4 **)(in_ECX + 4));
  **(uint **)(in_ECX + 4) = in_ECX;
  bVar4 = *param_1;
  if (bVar4 != 0) {
    piVar1 = *(int **)(in_ECX + 4);
    do {
      in_ECX = FUN_00426f70();
      if (in_ECX == bVar4) {
        pbVar2 = (byte *)*piVar1;
        bVar4 = *pbVar2;
        pbVar3 = pbVar2 + 1;
        *piVar1 = (int)pbVar3;
        if (-1 < (char)bVar4) goto LAB_0045434e;
        pbVar2 = (byte *)0x40;
        if ((bVar4 & 0x40) != 0) goto LAB_00454340;
        goto LAB_0045434e;
      }
      bVar4 = param_1[1];
      param_1 = param_1 + 1;
    } while (bVar4 != 0);
  }
  return in_ECX & 0xffffff00;
  while( true ) {
    pbVar3 = pbVar3 + 1;
    pbVar2 = (byte *)((uint)pbVar2 >> 1);
    *piVar1 = (int)pbVar3;
    if (((uint)pbVar2 & (int)(char)bVar4) == 0) break;
LAB_00454340:
    if (pbVar2 < (byte *)0x9) break;
  }
LAB_0045434e:
  if (param_2 != (byte *)0x0) {
    pbVar2 = (byte *)CONCAT31((int3)((uint)pbVar2 >> 8),*param_1);
    *param_2 = *param_1;
  }
  return CONCAT31((int3)((uint)pbVar2 >> 8),1);
}

