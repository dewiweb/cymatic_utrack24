// rea decompile_all
// name: FUN_004fda75
// address: 0x4fda75
// body: available
// range: 0x4fda75-0x4fdbb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004fda75(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_ESI;
  undefined8 uVar4;
  void *local_30 [3];
  void *local_24 [2];
  int local_1c;
  int *local_18;
  float local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x4fda81;
  FUN_004fa659();
  uVar4 = FUN_004fa666();
  if ((((int)((ulonglong)uVar4 >> 0x20) != *(int *)(unaff_ESI + 0x68)) ||
      ((int)uVar4 != *(int *)(unaff_ESI + 0x6c))) || (*(int *)(unaff_ESI + 0x4c) == 0)) {
    cVar1 = FUN_004fa5bc(*(undefined4 *)(unaff_ESI + 0x44),*(int *)(unaff_ESI + 0x68),
                         *(undefined4 *)(unaff_ESI + 0x6c));
    if (cVar1 == '\0') {
      return;
    }
    *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  }
  FUN_004a5633(local_24,unaff_ESI + 0x60);
  local_8 = 0;
  FUN_004a70ae(local_24);
  FUN_004a5633(local_30,unaff_ESI + 0x60);
  local_8._0_1_ = 1;
  FUN_004a5662(unaff_ESI + 0x54);
  local_8._0_1_ = 0;
  _free(local_30[0]);
  if (local_1c != 0) {
    FUN_004fd744(unaff_ESI);
    piVar2 = (int *)FUN_004fc650(*(undefined4 *)(unaff_ESI + 0x44),(int *)(unaff_ESI + 0x4c));
    local_8._0_1_ = 2;
    local_18 = piVar2;
    (**(code **)(*piVar2 + 0x18))(local_24);
    local_14 = (float)*(double *)(unaff_ESI + 0x80);
    uVar4 = FUN_0047745f(local_14);
    (*(code *)*(undefined4 *)((ulonglong)uVar4 >> 0x20))((int)uVar4);
    uVar3 = FUN_0047cc98();
    local_8._0_1_ = 3;
    FUN_004c19f3(uVar3,0);
    local_8._0_1_ = 2;
    FUN_0047cca3();
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)*piVar2)(1);
    cVar1 = FUN_004fe25f();
    if (cVar1 == '\0') {
      FUN_004fe22e();
    }
  }
  local_8 = 0xffffffff;
  _free(local_24[0]);
  return;
}

