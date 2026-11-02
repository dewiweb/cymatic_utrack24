// rea decompile_all
// name: FUN_00466810
// address: 0x466810
// body: available
// range: 0x466810-0x466aa6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00466810(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined **in_ECX;
  bool bVar7;
  bool bVar8;
  undefined4 **ppuVar9;
  char *pcVar10;
  uint local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined **local_34 [2];
  undefined1 local_2c [8];
  byte local_24 [4];
  ushort local_20;
  undefined2 local_1e;
  byte local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007010ab;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = (undefined *)0x0;
  local_8 = 0;
  in_ECX[1] = (undefined *)param_1;
  local_3c = in_ECX;
  local_14 = uVar5;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x43,4,0x100,(_func_void_void_ptr *)&LAB_00464380,guard_check_icall);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined2 *)(in_ECX + 0x143) = 0;
  *(undefined1 *)((int)in_ECX + 0x50e) = 0;
  in_ECX[0x144] = (undefined *)0x0;
  in_ECX[0x145] = (undefined *)0x0;
  in_ECX[0x146] = (undefined *)0x0;
  in_ECX[0x147] = (undefined *)0x0;
  in_ECX[0x148] = (undefined *)0x0;
  in_ECX[0x149] = (undefined *)0x0;
  in_ECX[0x14a] = (undefined *)0x0;
  in_ECX[0x14b] = (undefined *)0x0;
  in_ECX[0x14c] = (undefined *)0x0;
  in_ECX[0x14d] = (undefined *)0x0;
  in_ECX[0x14e] = (undefined *)0x0;
  cVar4 = FUN_00466ab0(&local_40,&local_3c);
  if ((cVar4 != '\0') && (iVar6 = (**(code **)(*param_1 + 0xc))(local_24,3,uVar5), iVar6 == 3)) {
    local_38 = (undefined4 *)0xffffffff;
    if ((char)local_24[0] < '\0') {
      FUN_00466b80(2 << (local_24[0] & 7));
    }
    do {
      while( true ) {
        iVar6 = (**(code **)(*(int *)in_ECX[1] + 0xc))(local_24,1);
        if ((iVar6 != 1) || (local_24[0] == 0x3b)) goto LAB_00466a87;
        if (local_24[0] != 0x21) break;
        iVar6 = FUN_00466c30(&local_38);
        if (iVar6 == 0) goto LAB_00466a87;
      }
    } while (local_24[0] != 0x2c);
    iVar6 = (**(code **)(*(int *)in_ECX[1] + 0xc))(local_24,9);
    if (iVar6 == 9) {
      local_40 = (uint)local_20;
      if ((-1 < (char)local_1c) || (cVar4 = FUN_00466b80(2 << (local_1c & 7)), cVar4 != '\0')) {
        puVar3 = local_38;
        bVar7 = -1 < (int)local_38;
        local_3c = juce::NativeImageType::vftable;
        bVar8 = -1 < (int)local_38;
        local_38 = (undefined4 *)CONCAT31(local_38._1_3_,bVar7);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_00673a00(&local_38,bVar8 + '\x01',local_40,local_1e,local_38);
        puVar2 = (undefined4 *)*in_ECX;
        *in_ECX = (undefined *)local_38;
        local_38 = puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = puVar2 + 1;
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)*puVar2)(1);
          }
        }
        local_34[0] = &PTR_vftable_00c7ed34;
        ppuVar9 = &local_38;
        local_8._0_1_ = 3;
        pcVar10 = "originalImageHadAlpha";
        local_2c[0] = bVar7;
        FUN_0061f730(ppuVar9,"originalImageHadAlpha");
        FUN_0061fa00(ppuVar9,pcVar10);
        local_8._0_1_ = 4;
        FUN_00637060(&local_38,local_34);
        FUN_00637000();
        local_8 = CONCAT31(local_8._1_3_,1);
        (**(code **)(*local_34[0] + 0x54))(local_2c);
        FUN_004671e0(local_1c >> 6 & 1,puVar3);
      }
    }
  }
LAB_00466a87:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

