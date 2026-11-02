// rea decompile_all
// name: FUN_0043a490
// address: 0x43a490
// body: available
// range: 0x43a490-0x43a7a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a490(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *_Memory;
  int iVar4;
  uint uVar5;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe5cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("Ogg-Vorbis file",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_00602db0(param_1,&local_14);
  local_8 = 0;
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  *in_ECX = juce::OggReader::vftable;
  in_ECX[0xcc] = 0;
  in_ECX[0xcd] = 0;
  in_ECX[0xce] = 0;
  in_ECX[0xcf] = in_ECX + 0xd1;
  in_ECX[0xd0] = 0;
  *(undefined1 *)(in_ECX + 0xf1) = 0;
  local_8._0_1_ = 1;
  *(undefined8 *)(in_ECX + 2) = 0;
  in_ECX[200] = FUN_0043ab20;
  in_ECX[0xc9] = FUN_0043ab40;
  in_ECX[0xca] = FUN_00407870;
  in_ECX[0xcb] = FUN_0043abb0;
  in_ECX[0xf2] = 0;
  in_ECX[0xf3] = 0;
  *(undefined1 *)(in_ECX + 9) = 1;
  iVar1 = FUN_005d2fb0();
  if (iVar1 == 0) {
    if ((in_ECX[0x15] == 0) || ((int)in_ECX[0x2a] < 3)) {
      iVar1 = in_ECX[0x26];
    }
    else {
      iVar1 = in_ECX[0x2c] * 0x20 + in_ECX[0x26];
    }
    if ((in_ECX[0x15] == 0) || ((int)in_ECX[0x2a] < 3)) {
      iVar4 = in_ECX[0x27];
    }
    else {
      iVar4 = in_ECX[0x2c] * 0x10 + in_ECX[0x27];
    }
    FUN_0043a7b0(iVar4,"ENCODER","encoder");
    FUN_0043a7b0(iVar4,"TITLE","id3title");
    FUN_0043a7b0(iVar4,"ARTIST","id3artist");
    FUN_0043a7b0(iVar4,"ALBUM","id3album");
    FUN_0043a7b0(iVar4,"COMMENT","id3comment");
    FUN_0043a7b0(iVar4,&DAT_00c147b4,"id3date");
    FUN_0043a7b0(iVar4,"GENRE","id3genre");
    FUN_0043a7b0(iVar4,"TRACKNUMBER","id3trackNumber");
    uVar2 = FUN_005d2f10();
    in_ECX[6] = uVar2;
    in_ECX[7] = 0;
    in_ECX[8] = *(undefined4 *)(iVar1 + 4);
    param_1 = in_ECX[6];
    in_ECX[4] = 0x10;
    *(double *)(in_ECX + 2) = (double)*(int *)(iVar1 + 8);
    if ((-1 < (int)in_ECX[7]) && ((0 < (int)in_ECX[7] || (0x1000 < param_1)))) {
      param_1 = 0x1000;
    }
    local_14 = in_ECX[8];
    local_8 = CONCAT31(local_8._1_3_,2);
    if ((param_1 != in_ECX[0xcd]) || (local_14 != in_ECX[0xcc])) {
      uVar3 = param_1 + 3 & 0xfffffffc;
      uVar5 = local_14 * 4 + 0x13U & 0xfffffff0;
      iVar4 = uVar3 * local_14;
      iVar1 = uVar5 + 0x20 + iVar4 * 4;
      in_ECX[0xce] = iVar1;
      FUN_00403500(iVar1,CONCAT31((int3)((uint)iVar4 >> 8),*(char *)(in_ECX + 0xf1) != '\0'));
      iVar4 = 0;
      in_ECX[0xcf] = in_ECX[0xd0];
      iVar1 = in_ECX[0xd0] + uVar5;
      if (0 < local_14) {
        do {
          *(int *)(in_ECX[0xcf] + iVar4 * 4) = iVar1;
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + uVar3 * 4;
        } while (iVar4 < local_14);
      }
      *(undefined4 *)(in_ECX[0xcf] + local_14 * 4) = 0;
      in_ECX[0xcd] = param_1;
      in_ECX[0xcc] = local_14;
    }
  }
  ExceptionList = local_10;
  return;
}

