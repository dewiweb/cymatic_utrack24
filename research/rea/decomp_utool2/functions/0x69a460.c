// rea decompile_all
// name: FUN_0069a460
// address: 0x69a460
// body: available
// range: 0x69a460-0x69a4f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069a460(int param_1)

{
  char cVar1;
  int *in_ECX;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 uStack_54;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  
  if ((char)in_ECX[0x2a] != '\0') {
    *(undefined1 *)(in_ECX + 0x2a) = 0;
    FUN_006e6400(&uStack_60);
    FUN_006ce9f0(1);
    local_58 = local_48;
    local_5c = 0x69a49b;
    FUN_006cff90();
    uStack_54 = 1;
    local_5c = local_40;
    local_58 = (undefined1 *)local_3c;
    uStack_60 = 0x69a4b4;
    cVar1 = FUN_006d01e0();
    if ((cVar1 != '\0') &&
       (((*(int **)(param_1 + 0x18) == in_ECX ||
         ((*(char *)(in_ECX[0x2f] + 0xcc) == '\0' && (*(char *)(in_ECX[0x2f] + 0xcd) == '\0')))) &&
        (*(char *)((int)in_ECX + 0xaa) == '\0')))) {
      *(undefined1 *)((int)in_ECX + 0xaa) = 1;
      uStack_54 = 0x69a4ef;
      (**(code **)(*in_ECX + 0xb0))();
    }
  }
  return;
}

