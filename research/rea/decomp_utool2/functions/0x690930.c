// rea decompile_all
// name: FUN_00690930
// address: 0x690930
// body: available
// range: 0x690930-0x690b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00690930(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721909;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960();
  }
  if (*(int *)(*(int *)(DAT_00c8a67c + 0x20) + 8) != 100) {
    FUN_0063eb10(100);
  }
  if (*(int *)(in_ECX + 0xa0) == 0) {
    puVar4 = operator_new(0x78);
    FUN_006ea2c0();
    *puVar4 = juce::TreeView::InsertPointHighlight::vftable;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    FUN_006e9790(puVar4[4],puVar4[5],100,0xc);
    FUN_006d1c90(1);
    *(byte *)(puVar4 + 0x1a) = *(byte *)(puVar4 + 0x1a) & 0xef | 8;
    puVar1 = *(undefined4 **)(in_ECX + 0xa0);
    if ((puVar1 != puVar4) &&
       (*(undefined4 **)(in_ECX + 0xa0) = puVar4, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    piVar2 = *(int **)(in_ECX + 0xa0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))(1);
      FUN_006e5050(piVar2,0xffffffff);
    }
    puVar4 = operator_new(0x70);
    FUN_006ea2c0();
    *puVar4 = juce::TreeView::TargetGroupHighlight::vftable;
    FUN_006d1c90(1);
    *(byte *)(puVar4 + 0x1a) = *(byte *)(puVar4 + 0x1a) & 0xef | 8;
    puVar1 = *(undefined4 **)(in_ECX + 0xa4);
    if ((puVar1 != puVar4) &&
       (*(undefined4 **)(in_ECX + 0xa4) = puVar4, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    piVar2 = *(int **)(in_ECX + 0xa4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))(1);
      FUN_006e5050(piVar2,0xffffffff);
    }
  }
  local_18 = *(int *)(in_ECX + 0xa0);
  iVar3 = *(int *)(*(int *)(in_ECX + 0x80) + 0x84);
  local_8 = 0;
  *(int *)(local_18 + 0x70) = param_1[2];
  *(int *)(local_18 + 0x74) = param_1[3];
  iVar6 = *(int *)(local_18 + 0x1c) / 2;
  FUN_006e9790(*param_1 - iVar6,param_1[1] - iVar6,(iVar6 - *param_1) + iVar3,
               *(int *)(local_18 + 0x1c));
  piVar2 = (int *)param_1[2];
  local_8 = 1;
  FUN_00690520(&local_2c,1);
  uVar5 = (**(code **)(*piVar2 + 0x14))();
  FUN_006e9790(local_2c,local_28,local_24,uVar5);
  ExceptionList = local_10;
  return;
}

