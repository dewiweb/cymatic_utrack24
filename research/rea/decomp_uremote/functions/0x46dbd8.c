// rea decompile_all
// name: FUN_0046dbd8
// address: 0x46dbd8
// body: available
// range: 0x46dbd8-0x46dcd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0046dbd8(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  void *extraout_ECX;
  void *pvVar5;
  int iVar6;
  void *local_24 [2];
  int local_1c;
  int local_18;
  undefined1 local_14 [12];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x46dbe4;
  local_18 = 0;
  FUN_00466269(0x2b,0x20);
  local_8 = 0;
  cVar2 = FUN_00465e93(0x25);
  if (cVar2 == '\0') {
    FUN_004652e4(local_14);
  }
  else {
    FUN_00466bf6();
    uVar3 = FUN_00466b7c();
    FUN_00471007(local_24,uVar3);
    local_8._0_1_ = 1;
    if (0 < local_1c) {
      pvVar5 = local_24[0];
      iVar6 = 1;
      do {
        if (*(char *)(iVar6 + -1 + (int)pvVar5) == '%') {
          local_18 = FUN_00464fcc();
          iVar4 = FUN_00464fcc();
          pvVar5 = extraout_ECX;
          if ((-1 < local_18) && (pvVar5 = extraout_ECX, -1 < iVar4)) {
            FUN_0046e764();
            FUN_0046e7a9(iVar6);
            pvVar5 = local_24[0];
          }
        }
        bVar1 = iVar6 < local_1c;
        iVar6 = iVar6 + 1;
      } while (bVar1);
    }
    FUN_00466c04();
    local_8 = (uint)local_8._1_3_ << 8;
    _free(local_24[0]);
  }
  FUN_004652d6();
  return;
}

