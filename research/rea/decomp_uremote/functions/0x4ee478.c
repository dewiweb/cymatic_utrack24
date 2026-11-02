// rea decompile_all
// name: FUN_004ee478
// address: 0x4ee478
// body: available
// range: 0x4ee478-0x4ee538 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004ee478(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 auStack_20 [24];
  int local_8;
  undefined4 uStack_4;
  undefined4 *puVar6;
  
  uStack_4 = 0;
  puVar5 = auStack_20;
  *param_1 = juce::DocumentWindow::vftable;
  local_8 = 4;
  iVar3 = FUN_004fca44();
  iVar11 = iVar3 + -1;
  if (-1 < iVar11) {
    piVar4 = param_1 + iVar3 + 0x3b;
    do {
      puVar1 = (undefined4 *)*piVar4;
      if ((puVar1 != (undefined4 *)0x0) && (*piVar4 = 0, puVar1 != (undefined4 *)0x0)) {
        puVar1 = (undefined4 *)*puVar1;
        *(undefined4 *)(puVar5 + -4) = 1;
        pcVar2 = (code *)*puVar1;
        puVar6 = (undefined4 *)(puVar5 + -8);
        puVar5 = puVar5 + -8;
        *puVar6 = 0x4ee4b8;
        (*pcVar2)();
      }
      iVar11 = iVar11 + -1;
      piVar4 = piVar4 + -1;
    } while (-1 < iVar11);
  }
  puVar1 = (undefined4 *)param_1[0x40];
  if ((puVar1 != (undefined4 *)0x0) && (param_1[0x40] = 0, puVar1 != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)*puVar1;
    *(undefined4 *)(puVar5 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar7 = (undefined4 *)(puVar5 + -8);
    puVar5 = puVar5 + -8;
    *puVar7 = 0x4ee4db;
    (*pcVar2)();
  }
  local_8._0_1_ = 3;
  if ((undefined4 *)param_1[0x42] != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)param_1[0x42];
    *(undefined4 *)(puVar5 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar8 = (undefined4 *)(puVar5 + -8);
    puVar5 = puVar5 + -8;
    *puVar8 = 0x4ee4ef;
    (*pcVar2)();
  }
  local_8._0_1_ = 2;
  if ((undefined4 *)param_1[0x40] != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)param_1[0x40];
    *(undefined4 *)(puVar5 + -4) = 1;
    pcVar2 = (code *)*puVar1;
    puVar9 = (undefined4 *)(puVar5 + -8);
    puVar5 = puVar5 + -8;
    *puVar9 = 0x4ee503;
    (*pcVar2)();
  }
  puVar10 = puVar5 + -4;
  *(undefined4 *)(puVar5 + -4) = 0x4ee50e;
  FUN_004c4d7a();
  *(undefined1 **)(puVar10 + -4) = &LAB_004f6570;
  *(undefined4 *)(puVar10 + -8) = 3;
  *(undefined4 *)(puVar10 + -0xc) = 4;
  *(undefined4 **)(puVar10 + -0x10) = param_1 + 0x3c;
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 *)(puVar10 + -0x14) = 0x4ee527;
  _eh_vector_destructor_iterator_
            (*(void **)(puVar10 + -0x10),*(uint *)(puVar10 + -0xc),*(int *)(puVar10 + -8),
             *(_func_void_void_ptr **)(puVar10 + -4));
  local_8 = 0xffffffff;
  *(undefined4 **)(puVar10 + -4) = param_1;
  *(undefined4 *)(puVar10 + -8) = 0x4ee531;
  FUN_004eecfe();
  *(undefined4 *)(puVar10 + -4) = 0x4ee536;
  return;
}

