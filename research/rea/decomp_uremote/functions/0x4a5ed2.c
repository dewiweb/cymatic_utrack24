// rea decompile_all
// name: FUN_004a5ed2
// address: 0x4a5ed2
// body: available
// range: 0x4a5ed2-0x4a6077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint * FUN_004a5ed2(uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 local_74 [64];
  undefined1 local_34 [16];
  int local_24;
  int local_20;
  undefined4 local_18;
  undefined4 local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x4a5ede;
  local_14 = 0;
  FUN_0047e7d7(local_34,0);
  local_8 = 1;
  cVar1 = FUN_0047764b();
  if (cVar1 != '\0') {
    local_18 = *(undefined4 *)(param_3 + 8);
    uVar2 = FUN_005b3fb0();
    local_18 = *(undefined4 *)(param_3 + 0x14);
    uVar3 = FUN_005b3fb0();
    if ((param_4 == 0) || (((uVar3 | uVar2) & 0xe0) == 0)) {
      iVar4 = FUN_0047e3bf();
      if (iVar4 == 2) {
        FUN_00500fc8(extraout_ECX);
      }
      else {
        FUN_004a9375(extraout_ECX);
      }
      cVar1 = FUN_004786d2();
      uVar2 = ~-(uint)(cVar1 != '\0') & in_ECX;
      *param_1 = uVar2;
      if (uVar2 != 0) {
        *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
      }
      goto LAB_004a605b;
    }
  }
  cVar1 = FUN_0047753a();
  if (cVar1 == '\0') {
    FUN_0047888f();
    local_8._0_1_ = 2;
    FUN_00478eaa(0,0,(float)local_24,(float)local_20);
    FUN_004776af(local_74,in_ECX + 0xc,extraout_ECX_00,param_3);
    local_8._0_1_ = 3;
    FUN_00478556(local_74);
    local_8._0_1_ = 2;
    FUN_004f7994();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004f7994();
    cVar1 = FUN_004786d2();
    if (cVar1 == '\0') {
      iVar4 = FUN_0047e3bf();
      if (iVar4 == 2) {
        FUN_004a93ef(param_4);
      }
      else {
        FUN_004a9497(param_4);
      }
    }
    cVar1 = FUN_004786d2();
    uVar2 = ~-(uint)(cVar1 != '\0') & in_ECX;
    *param_1 = uVar2;
    if (uVar2 != 0) {
      *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
    }
  }
  else {
    *param_1 = 0;
  }
LAB_004a605b:
  local_14 = 1;
  local_8 = local_8 & 0xffffff00;
  FUN_0047e819();
  return param_1;
}

