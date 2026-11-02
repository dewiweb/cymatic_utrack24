// rea decompile_all
// name: FUN_006aea80
// address: 0x6aea80
// body: available
// range: 0x6aea80-0x6aeaef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aea80(undefined4 param_1)

{
  int *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  iVar1 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar1) {
    FUN_004b0640(iVar1 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar1 = in_ECX[2];
  in_ECX[2] = iVar1 + 1;
  puVar2 = (undefined4 *)(iVar1 * 0x20 + *in_ECX);
  if (puVar2 != (undefined4 *)0x0) {
    uStack_28 = (undefined4)in_XMM2_Qa;
    uStack_24 = (undefined4)((ulonglong)in_XMM2_Qa >> 0x20);
    *puVar2 = in_XMM1_Da;
    puVar2[1] = in_XMM1_Db;
    puVar2[2] = uStack_28;
    puVar2[3] = uStack_24;
    local_20 = (undefined4)in_XMM3_Qa;
    uStack_1c = (undefined4)((ulonglong)in_XMM3_Qa >> 0x20);
    puVar2[4] = local_20;
    puVar2[5] = uStack_1c;
    puVar2[6] = param_1;
    puVar2[7] = uStack_14;
  }
  return;
}

