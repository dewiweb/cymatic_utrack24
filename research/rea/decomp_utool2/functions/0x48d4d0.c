// rea decompile_all
// name: FUN_0048d4d0
// address: 0x48d4d0
// body: available
// range: 0x48d4d0-0x48d5aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d4d0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *in_ECX;
  ulonglong *puVar1;
  float in_XMM1_Da;
  ulonglong local_40;
  undefined4 local_38;
  undefined4 local_34;
  double local_30;
  double local_28;
  undefined8 local_20;
  int iStack_18;
  int iStack_14;
  
  puVar1 = &local_40;
  local_40 = local_40 & 0xffffffff00000000;
  if (in_XMM1_Da == 1.0) {
    puVar1 = &local_20;
    local_20 = (double)CONCAT44(param_2,param_1);
    iStack_18 = param_3;
    iStack_14 = param_4;
  }
  else {
    local_20 = (double)((float)param_4 * in_XMM1_Da) + 6755399441055744.0;
    local_28 = (double)((float)param_3 * in_XMM1_Da) + 6755399441055744.0;
    local_30 = (double)((float)param_2 * in_XMM1_Da) + 6755399441055744.0;
    local_40 = CONCAT44(local_30._0_4_,
                        SUB84((double)((float)param_1 * in_XMM1_Da) + 6755399441055744.0,0));
    local_38 = local_28._0_4_;
    local_34 = (undefined4)local_20;
  }
  *in_ECX = *(undefined4 *)puVar1;
  in_ECX[1] = *(undefined4 *)((int)puVar1 + 4);
  in_ECX[2] = *(undefined4 *)(puVar1 + 1);
  in_ECX[3] = *(undefined4 *)((int)puVar1 + 0xc);
  return;
}

