// rea decompile_all
// name: FUN_00502fd0
// address: 0x502fd0
// body: available
// range: 0x502fd0-0x503084 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00502fd0(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  FUN_00411260();
  if (*(int *)(in_ECX + 0x370) != 0) {
    uStack_18 = 0x502ff2;
    FID_conflict__free(*(void **)(in_ECX + 0x36c));
    *(undefined4 *)(in_ECX + 0x36c) = 0;
    *(undefined4 *)(in_ECX + 0x370) = 0;
  }
  *(undefined4 *)(in_ECX + 0x374) = 0;
  FUN_004ae6c0();
  uStack_18 = 0x50302a;
  FUN_004f8300();
  if ((*(byte *)(in_ECX + 0x2a1) & 0x10) == 0) {
    *(byte *)(in_ECX + 0x2a1) = *(byte *)(in_ECX + 0x2a1) | 0x10;
    iVar1 = *(int *)(in_ECX + 0x244);
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x69) & 0x10) != 0) goto LAB_0050305a;
      if (*(int *)(iVar1 + 0xc) != 0) {
        cVar2 = FUN_006e6320();
        if (cVar2 == '\0') goto LAB_0050305a;
      }
    }
    FUN_006cc240();
  }
LAB_0050305a:
  FUN_006e6400(auStack_20);
  FUN_006ce9f0(1);
  *(byte *)(in_ECX + 0x2a0) = *(byte *)(in_ECX + 0x2a0) & 0xef | 8;
  FUN_004f6e30();
  return;
}

