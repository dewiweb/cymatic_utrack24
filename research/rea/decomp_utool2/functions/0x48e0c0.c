// rea decompile_all
// name: FUN_0048e0c0
// address: 0x48e0c0
// body: available
// range: 0x48e0c0-0x48e18c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048e0c0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  float unaff_EBX;
  float unaff_ESI;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  
  uStack_2c = 0x48e0d6;
  cVar1 = FUN_0068da80();
  if (cVar1 == '\0') {
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x2c))(auStack_30,param_1,param_2);
    FUN_004b1510();
    uStack_1c = SUB84((double)unaff_EBX + 6755399441055744.0,0);
    uVar2 = SUB84((double)unaff_ESI + 6755399441055744.0,0);
    cVar1 = FUN_006cf380(uVar2,uStack_1c);
    if (cVar1 != '\0') {
      uVar2 = FUN_006cf2f0(uVar2,uStack_1c);
      return uVar2;
    }
  }
  return 0;
}

