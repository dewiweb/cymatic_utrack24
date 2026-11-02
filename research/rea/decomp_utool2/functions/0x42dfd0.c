// rea decompile_all
// name: FUN_0042dfd0
// address: 0x42dfd0
// body: available
// range: 0x42dfd0-0x42e0b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042dfd0(void)

{
  char cVar1;
  int in_ECX;
  void *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  void *pvStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fde78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_40 = (void *)0x0;
  uStack_3c = 0;
  uStack_38 = 0;
  pvStack_34 = (void *)0x0;
  local_30 = 0;
  uStack_2c = 0;
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  local_20 = 0;
  pvStack_1c = (void *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_8 = 0;
  FUN_0042d8c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  cVar1 = FUN_0045d570(in_ECX + 0x1c);
  if (cVar1 != '\0') {
    cVar1 = FUN_0045d570(in_ECX + 0x28);
    if (cVar1 != '\0') {
      cVar1 = FUN_004354b0(in_ECX + 0x34);
      if (cVar1 != '\0') {
        cVar1 = FUN_004354b0(in_ECX + 0x40);
        if (cVar1 != '\0') goto LAB_0042e06a;
      }
    }
  }
  FUN_0042e1a0(&local_40);
  FUN_005cace0();
LAB_0042e06a:
  FID_conflict__free(pvStack_1c);
  FID_conflict__free(pvStack_28);
  FUN_0040f7f0();
  FID_conflict__free(pvStack_34);
  FUN_0040f7f0();
  FID_conflict__free(local_40);
  ExceptionList = local_10;
  return;
}

