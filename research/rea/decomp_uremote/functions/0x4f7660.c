// rea decompile_all
// name: FUN_004f7660
// address: 0x4f7660
// body: available
// range: 0x4f7660-0x4f77e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004f7660(float *param_1)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  int *unaff_EDI;
  void *local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_15;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x4f766c;
  cVar2 = FUN_004a4daa();
  if (cVar2 == '\0') {
    if (unaff_EDI[2] != 0) {
      local_1c = unaff_EDI[2] + -1;
      local_15 = '\0';
      if (-1 < local_1c) {
        local_20 = local_1c * 0x10;
        do {
          pfVar3 = (float *)(*unaff_EDI + local_20);
          cVar2 = FUN_004f7b1f();
          if (cVar2 != '\0') {
            if ((((*pfVar3 < *param_1) || (pfVar3[1] < param_1[1])) ||
                (pfVar3[2] + *pfVar3 < param_1[2] + *param_1 ==
                 (pfVar3[2] + *pfVar3 == param_1[2] + *param_1))) ||
               (pfVar3[3] + pfVar3[1] < param_1[3] + param_1[1] ==
                (pfVar3[3] + pfVar3[1] == param_1[3] + param_1[1]))) {
              cVar2 = FUN_004f7b96();
              if (cVar2 == '\0') {
                local_15 = '\x01';
              }
            }
            else {
              FUN_004f7f6e();
            }
          }
          local_1c = local_1c + -1;
          local_20 = local_20 + -0x10;
        } while (-1 < local_1c);
        if ((local_15 != '\0') && (0 < unaff_EDI[2])) {
          local_2c = (void *)0x0;
          local_28 = 0;
          local_24 = 0;
          local_8 = 0;
          FUN_004a6318(&local_2c);
          local_8 = 1;
          iVar4 = unaff_EDI[2] + -1;
          iVar1 = local_24;
          if (-1 < iVar4) {
            local_20 = iVar4 * 0x10;
            do {
              cVar2 = FUN_004f7b1f();
              if ((cVar2 != '\0') && (FUN_004f7c89(&local_2c), local_24 == 0)) goto LAB_004f77c8;
              local_20 = local_20 + -0x10;
              iVar4 = iVar4 + -1;
              iVar1 = local_24;
            } while (-1 < iVar4);
          }
          while (-1 < iVar1 + -1) {
            FUN_004f9028();
            FUN_004a7eca();
            iVar1 = iVar1 + -1;
          }
LAB_004f77c8:
          local_8 = 0xffffffff;
          _free(local_2c);
          return;
        }
      }
    }
    FUN_004a7eca();
  }
  return;
}

