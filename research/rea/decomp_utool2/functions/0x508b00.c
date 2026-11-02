// rea decompile_all
// name: FUN_00508b00
// address: 0x508b00
// body: available
// range: 0x508b00-0x508d6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00508b00(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int in_EDX;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  
  cVar2 = FUN_00682580();
  if (cVar2 != '\0') {
    FUN_0067bc00(0x3e4ccccd,0x3e4ccccd,0x3f19999a,0x3f19999a);
    FUN_00682e50();
    FUN_00682d90();
    FUN_00682d90();
    if ((DAT_00c7eb88 != 0) && (*(float *)(DAT_00c7eb80 + -4 + DAT_00c7eb88 * 4) != 100005.0)) {
      if (DAT_00c7eb84 < DAT_00c7eb88 + 1) {
        FUN_00409cf0((DAT_00c7eb88 + 1) / 2 + DAT_00c7eb88 + 9 & 0xfffffff8);
      }
      iVar1 = DAT_00c7eb88 * 4;
      DAT_00c7eb88 = DAT_00c7eb88 + 1;
      *(undefined4 *)(DAT_00c7eb80 + iVar1) = 0x47c35280;
    }
  }
  uVar3 = DAT_00c7ebb0;
  if ((in_EDX != 2) && (uVar3 = DAT_00c7ef94, in_EDX == 1)) {
    uVar3 = DAT_00c7ef7c;
  }
  FUN_00684c50(uVar3);
  local_1c = 0.0;
  local_14 = 0.0;
  local_20 = (float)param_2;
  local_c = 0;
  local_18 = (float)(param_1 - param_2 / 2) + 0.0;
  local_10 = local_20;
  cVar2 = (**(code **)(*(int *)*in_ECX + 0x30))();
  if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
    (**(code **)(*(int *)*in_ECX + 0x5c))(&DAT_00c7eb80,&local_20);
  }
  if (in_EDX == 1) {
    FUN_00684c50(DAT_00c7ef90);
    local_20 = (float)param_1;
    local_1c = (float)param_2 * 0.3;
    local_14 = (float)param_2 * 0.7;
    local_18 = local_20;
    FUN_00676b40(&local_20);
    local_1c = (float)param_2 * 0.5;
    local_18 = (float)param_2 * 0.2;
    local_20 = (float)param_1 - local_18;
    local_18 = local_18 + (float)param_1;
    local_14 = local_1c;
    FUN_00676b40(&local_20);
  }
  return;
}

