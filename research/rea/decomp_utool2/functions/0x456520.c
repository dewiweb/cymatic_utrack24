// rea decompile_all
// name: FUN_00456520
// address: 0x456520
// body: available
// range: 0x456520-0x45666a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00456520(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_ECX;
  int local_34 [6];
  ushort local_1a;
  ushort local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070038e;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ZipFile::ZipInputStream::vftable;
  in_ECX[1] = param_1;
  iVar5 = *param_2;
  in_ECX[2] = iVar5;
  piVar3 = (int *)(iVar5 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  in_ECX[4] = param_2[2];
  in_ECX[5] = param_2[3];
  in_ECX[6] = param_2[4];
  in_ECX[7] = param_2[5];
  in_ECX[8] = param_2[6];
  in_ECX[9] = param_2[7];
  in_ECX[10] = param_2[8];
  in_ECX[0xb] = param_2[9];
  *(char *)(in_ECX + 0xc) = (char)param_2[10];
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[0x12] = 0;
  local_8 = 2;
  if (*(int *)(param_1 + 0x2c) != 0) {
    puVar4 = (undefined4 *)FUN_006358c0(local_14);
    puVar1 = (undefined4 *)in_ECX[0x12];
    if ((puVar1 != puVar4) && (in_ECX[0x12] = puVar4, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x11] = in_ECX[0x12];
  }
  if (((((int *)in_ECX[0x11] != (int *)0x0) &&
       (cVar2 = (**(code **)(*(int *)in_ECX[0x11] + 0x58))(param_2[6],param_2[7]), cVar2 != '\0'))
      && (iVar5 = (**(code **)(*(int *)in_ECX[0x11] + 0xc))(local_34,0x1e), iVar5 == 0x1e)) &&
     (local_34[0] == 0x4034b50)) {
    in_ECX[0x10] = local_1a + 0x1e + (uint)local_18;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

