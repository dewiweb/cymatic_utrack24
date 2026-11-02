// rea decompile_all
// name: FUN_00533620
// address: 0x533620
// body: available
// range: 0x533620-0x533700 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533620(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined4 *local_1c;
  int local_18;
  double local_10;
  
  auVar5 = ZEXT816(0);
  iVar4 = 0;
  local_10 = 0.0;
  local_18 = in_ECX;
  if (0 < *(int *)(in_ECX + 0x4bc)) {
    do {
      FUN_0053f050(&local_1c);
      puVar3 = local_1c;
      if (local_1c != (undefined4 *)0x0) {
        iVar2 = local_1c[6];
        if (iVar2 == 0) {
          dVar6 = 0.0;
        }
        else {
          FUN_006f56f0();
          dVar6 = auVar5._0_8_ / (double)iVar2;
        }
        auVar5._0_12_ = ZEXT812(0);
        auVar5._12_4_ = 0;
        if (local_10 < dVar6) {
          if (iVar2 == 0) {
            local_10 = 0.0;
          }
          else {
            FUN_006f56f0();
            local_10 = auVar5._0_8_;
            auVar5._0_8_ = (double)iVar2;
            auVar5._8_8_ = 0;
            local_10 = local_10 / auVar5._0_8_;
          }
        }
        LOCK();
        piVar1 = puVar3 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar3)(1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_18 + 0x4bc));
  }
  return;
}

