// rea decompile_all
// name: FUN_005bd870
// address: 0x5bd870
// body: available
// range: 0x5bd870-0x5bdba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bd870(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  char *pcVar5;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_0071a18e;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = &DAT_00bfe12c;
  local_8 = 0;
  switch(in_EDX) {
  case 1:
    break;
  case 2:
    switch(param_1) {
    default:
      goto switchD_005bd8c0_default;
    case 1:
      pcVar5 = "Music";
      break;
    case 2:
      pcVar5 = "Recording";
      break;
    case 3:
      pcVar5 = "Music";
      FUN_0045c990("Music",uVar3);
      local_8 = 6;
      FUN_00634140();
      puVar4 = (undefined4 *)FUN_006377c0(pcVar5);
      goto LAB_005bdb7e;
    case 4:
    case 5:
      pcVar5 = "Recording";
      FUN_0045c990("Recording",uVar3);
      local_8 = 5;
      FUN_00634140();
      puVar4 = (undefined4 *)FUN_006377c0(pcVar5);
      goto LAB_005bdb7e;
    }
    goto LAB_005bd8e3;
  case 3:
    switch(param_1) {
    default:
      goto switchD_005bd8c0_default;
    case 1:
      pcVar5 = "Music";
      break;
    case 2:
      pcVar5 = "MultiTrack";
      break;
    case 3:
      pcVar5 = "Music";
      FUN_0045c990("Music",uVar3);
      local_8 = 2;
      FUN_00634140();
      puVar4 = (undefined4 *)FUN_006377c0(pcVar5);
      goto LAB_005bdb7e;
    case 4:
      pcVar5 = "MultiTrack";
      FUN_0045c990("MultiTrack",uVar3);
      local_8 = 1;
      FUN_00634140();
      puVar4 = (undefined4 *)FUN_006377c0(pcVar5);
      goto LAB_005bdb7e;
    case 5:
      pcVar5 = "#PLAYLISTS";
    }
    goto LAB_005bd8e3;
  case 4:
    switch(param_1) {
    default:
      goto switchD_005bd8c0_default;
    case 1:
      pcVar5 = "Music";
      break;
    case 2:
      pcVar5 = "MultiTrack";
      break;
    case 3:
      pcVar5 = "Music";
      FUN_0045c990("Music",uVar3);
      local_8 = 4;
      FUN_00634140();
      puVar4 = (undefined4 *)FUN_006377c0(pcVar5);
      goto LAB_005bdb7e;
    case 4:
      pcVar5 = "MultiTrack";
      FUN_0045c990("MultiTrack",uVar3);
      local_8 = 3;
      FUN_00634140();
      puVar4 = (undefined4 *)FUN_006377c0(pcVar5);
      goto LAB_005bdb7e;
    case 5:
      pcVar5 = "#PLAYLISTS";
    }
    goto LAB_005bd8e3;
  case 5:
    if (param_1 == 0) {
      ExceptionList = pvVar2;
      return;
    }
    if (param_1 != 1) {
      ExceptionList = pvVar2;
      return;
    }
    FUN_0045c990("Music",uVar3);
    local_8 = 9;
    puVar4 = (undefined4 *)FUN_00634140();
    goto LAB_005bdb7e;
  default:
    goto switchD_005bd8c0_default;
  }
  switch(param_1) {
  default:
    goto switchD_005bd8c0_default;
  case 1:
    pcVar5 = "Music";
    break;
  case 2:
    pcVar5 = "Recording";
    break;
  case 3:
    pcVar5 = "Music";
    FUN_0045c990("Music",uVar3);
    local_8 = 8;
    FUN_00634140();
    puVar4 = (undefined4 *)FUN_006377c0(pcVar5);
    goto LAB_005bdb7e;
  case 4:
  case 5:
    pcVar5 = "Recording";
    FUN_0045c990("Recording",uVar3);
    local_8 = 7;
    FUN_00634140();
    puVar4 = (undefined4 *)FUN_006377c0(pcVar5);
LAB_005bdb7e:
    uVar1 = *in_ECX;
    *in_ECX = *puVar4;
    *puVar4 = uVar1;
    FUN_00637c10();
    goto LAB_005bdb8e;
  }
LAB_005bd8e3:
  FUN_0045c990(pcVar5,uVar3);
  *in_ECX = local_14;
LAB_005bdb8e:
  FUN_00637c10();
switchD_005bd8c0_default:
  ExceptionList = local_10;
  return;
}

