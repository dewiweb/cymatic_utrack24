// rea decompile_all
// name: FUN_004a5695
// address: 0x4a5695
// body: available
// range: 0x4a5695-0x4a57cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a5695(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int unaff_EDI;
  void *local_28 [2];
  int local_20;
  int local_1c;
  char local_15;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x4a56a1;
  cVar1 = FUN_004a4bf9();
  if (cVar1 == '\0') {
    if (*(int *)(unaff_EDI + 8) != 0) {
      iVar2 = *(int *)(unaff_EDI + 8) + -1;
      local_15 = '\0';
      if (-1 < iVar2) {
        local_1c = iVar2 * 0x10;
        do {
          cVar1 = FUN_004a6c8c();
          if (cVar1 != '\0') {
            cVar1 = FUN_004a4c2d();
            if (cVar1 == '\0') {
              cVar1 = FUN_004a6ce9();
              if (cVar1 == '\0') {
                local_15 = '\x01';
              }
            }
            else {
              FUN_004a722c(iVar2);
            }
          }
          local_1c = local_1c + -0x10;
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
        if ((local_15 != '\0') && (0 < *(int *)(unaff_EDI + 8))) {
          FUN_004a5633(local_28,param_1);
          local_8 = 0;
          iVar2 = *(int *)(unaff_EDI + 8) + -1;
          if (-1 < iVar2) {
            local_1c = iVar2 * 0x10;
            do {
              cVar1 = FUN_004a6c8c();
              if ((cVar1 != '\0') && (FUN_004a57cc(local_28), local_20 == 0)) goto LAB_004a57ab;
              local_1c = local_1c + -0x10;
              iVar2 = iVar2 + -1;
            } while (-1 < iVar2);
          }
          while (-1 < local_20 + -1) {
            FUN_004a9971();
            FUN_004a7151();
            local_20 = local_20 + -1;
          }
LAB_004a57ab:
          local_8 = 0xffffffff;
          _free(local_28[0]);
          return;
        }
      }
    }
    FUN_004a7151();
  }
  return;
}

