// rea decompile_all
// name: FUN_00439890
// address: 0x439890
// body: available
// range: 0x439890-0x4399e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439890(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *_Memory;
  undefined4 *local_c [2];
  
  local_c[0] = in_ECX;
  FUN_0045c990("FLAC file");
  FUN_00602db0(param_1,local_c);
  _Memory = local_c[0] + -2;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar3 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  *in_ECX = juce::FlacReader::vftable;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = in_ECX + 0x1a;
  in_ECX[0x19] = 0;
  *(undefined1 *)(in_ECX + 0x3a) = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  *(undefined1 *)((int)in_ECX + 0xf5) = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  uVar2 = FUN_005f71e0();
  in_ECX[0x14] = uVar2;
  iVar3 = FUN_005f6fb0(FUN_00439e90,FUN_00439eb0,FUN_00439ed0,FUN_00439ef0,FUN_00439f10,FUN_00439f30
                       ,guard_check_icall);
  *(bool *)(in_ECX + 0x3d) = iVar3 == 0;
  if (iVar3 == 0) {
    FUN_005f6a50();
    if ((in_ECX[6] == 0 && in_ECX[7] == 0) && (0.0 < *(double *)(in_ECX + 2))) {
      *(undefined1 *)((int)in_ECX + 0xf5) = 1;
      FUN_005f69d0();
      uVar2 = in_ECX[6];
      uVar1 = in_ECX[7];
      *(undefined1 *)((int)in_ECX + 0xf5) = 0;
      FUN_005f6b50();
      FUN_005f6a50();
      in_ECX[6] = uVar2;
      in_ECX[7] = uVar1;
    }
  }
  return;
}

