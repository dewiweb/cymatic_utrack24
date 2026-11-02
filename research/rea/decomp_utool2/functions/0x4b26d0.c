// rea decompile_all
// name: FUN_004b26d0
// address: 0x4b26d0
// body: available
// range: 0x4b26d0-0x4b2764 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b26d0(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  uVar3 = *in_ECX;
  uVar4 = in_ECX[2];
  uVar5 = in_ECX[3];
  uVar6 = in_ECX[1];
  uVar1 = *(undefined8 *)(in_ECX + 4);
  uVar2 = *(undefined1 *)(in_ECX + 6);
  *in_ECX = *in_EDX;
  in_ECX[1] = in_EDX[1];
  in_ECX[2] = in_EDX[2];
  in_ECX[3] = in_EDX[3];
  *(undefined8 *)(in_ECX + 4) = *(undefined8 *)(in_EDX + 4);
  *(undefined1 *)(in_ECX + 6) = *(undefined1 *)(in_EDX + 6);
  *in_EDX = uVar3;
  in_EDX[1] = uVar6;
  in_EDX[2] = uVar4;
  in_EDX[3] = uVar5;
  *(undefined8 *)(in_EDX + 4) = uVar1;
  *(undefined1 *)(in_EDX + 6) = uVar2;
  return;
}

