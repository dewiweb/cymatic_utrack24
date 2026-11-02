// rea decompile_all
// name: FUN_004b5110
// address: 0x4b5110
// body: available
// range: 0x4b5110-0x4b51ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5110(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_18;
  undefined4 uStack_10;
  
  if (*(float *)(in_ECX + 0x80) != **(float **)(in_ECX + 0x74)) {
    *(float *)(in_ECX + 0x80) = **(float **)(in_ECX + 0x74);
    puVar3 = *(undefined4 **)(in_ECX + 0xf8);
    *(undefined4 *)(in_ECX + 0xf8) = 0;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar3 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        iStack_24 = 1;
        iStack_28 = 0x4b5161;
        (**(code **)*puVar3)();
      }
    }
    FUN_006e6400(&uStack_30);
    FUN_006ce9f0(1);
  }
  iVar2 = *(int *)(in_ECX + 0xf4);
  iStack_28 = iVar2 * 2;
  uStack_18 = SUB84((double)((1.0 - **(float **)(in_ECX + 0x7c)) *
                            (float)(*(int *)(in_ECX + 0x1c) + iVar2 * -2)) + 6755399441055744.0,0);
  uStack_2c = uStack_18;
  uStack_10 = SUB84((double)((float)(*(int *)(in_ECX + 0x18) + iVar2 * -2) *
                            **(float **)(in_ECX + 0x78)) + 6755399441055744.0,0);
  uStack_30 = uStack_10;
  iStack_24 = iStack_28;
  FUN_006e9790();
  return;
}

