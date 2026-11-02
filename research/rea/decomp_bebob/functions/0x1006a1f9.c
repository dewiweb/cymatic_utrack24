// rea decompile_all
// name: COleIPFrameWnd::OnSetMessageString
// address: 0x1006a1f9
// body: available
// range: 0x1006a1f9-0x1006a295 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    public: virtual long __thiscall COleIPFrameWnd::OnSetMessageString(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall COleIPFrameWnd::OnSetMessageString(COleIPFrameWnd *this,uint param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  undefined **ppuVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStackY_2c;
  uint uStackY_28;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar5 = param_1;
  uStack_4 = 0;
  local_8 = 0x1006a205;
  puVar8 = (undefined4 *)auStack_20;
  if (*(int *)(this + 0x128) == 0) goto LAB_1006a27c;
  ppuVar6 = FUN_1000ad47();
  uStackY_28 = 0x1006a221;
  FUN_10005e00(&param_1,(int *)ppuVar6);
  local_8 = 0;
  ppuVar6 = (undefined **)param_2;
  if (param_2 == 0) {
    if (uVar5 != 0) {
      uStackY_28 = uVar5;
      puVar8 = &uStackY_2c;
      uStackY_2c = 0x1006a23f;
      (**(code **)(*(int *)this + 0x170))();
      ppuVar6 = (undefined **)param_1;
      if (param_1 != 0) goto LAB_1006a24b;
    }
    ppuVar6 = &PTR_1011d390;
  }
LAB_1006a24b:
  *(undefined ***)((int)puVar8 + -4) = ppuVar6;
  *(undefined4 *)((int)puVar8 + -8) = 0x1006a254;
  piVar7 = FUN_10006ce0(&param_2,*(short **)((int)puVar8 + -4));
  piVar1 = *(int **)(this + 0x128);
  *(int *)((int)puVar8 + -4) = *piVar7;
  iVar2 = *piVar1;
  *(int **)((int)puVar8 + -8) = piVar1;
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar3 = *(code **)(iVar2 + 0x30);
  puVar9 = (undefined4 *)((int)puVar8 + -0xc);
  puVar8 = (undefined4 *)((int)puVar8 + -0xc);
  *puVar9 = 0x1006a266;
  (*pcVar3)();
  *(undefined4 *)((int)puVar8 + -4) = 0x1006a271;
  FUN_10001030((undefined4 *)(param_2 + -0x10));
  *(undefined4 *)((int)puVar8 + -4) = 0x1006a27c;
  FUN_10001030((undefined4 *)(param_1 - 0x10));
LAB_1006a27c:
  lVar4 = *(long *)(this + 0xcc);
  *(uint *)(this + 0xcc) = uVar5;
  *(uint *)(this + 200) = uVar5;
  *(undefined4 *)((int)puVar8 + -4) = 0x1006a293;
  return lVar4;
}

