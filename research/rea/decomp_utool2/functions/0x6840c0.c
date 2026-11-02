// rea decompile_all
// name: FUN_006840c0
// address: 0x6840c0
// body: available
// range: 0x6840c0-0x684191 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006840c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined8 *puVar2;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  
  *in_ECX = in_XMM2_Da;
  in_ECX[1] = in_XMM3_Da;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  *(undefined1 *)(in_ECX + 4) = param_5;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  iVar1 = in_ECX[7] + 1;
  if ((int)in_ECX[6] < iVar1) {
    FUN_0040ede0(iVar1 / 2 + in_ECX[7] + 9 & 0xfffffff8);
  }
  iVar1 = in_ECX[7];
  in_ECX[7] = iVar1 + 1;
  puVar2 = (undefined8 *)(iVar1 * 0x10 + in_ECX[5]);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = param_1;
  }
  iVar1 = in_ECX[7] + 1;
  if ((int)in_ECX[6] < iVar1) {
    FUN_0040ede0(iVar1 / 2 + in_ECX[7] + 9 & 0xfffffff8);
  }
  iVar1 = in_ECX[7];
  in_ECX[7] = iVar1 + 1;
  puVar2 = (undefined8 *)(iVar1 * 0x10 + in_ECX[5]);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = param_2;
  }
  return;
}

