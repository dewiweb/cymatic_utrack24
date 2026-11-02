// rea decompile_all
// name: FUN_004286e0
// address: 0x4286e0
// body: available
// range: 0x4286e0-0x428961 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004287a2) */

void FUN_004286e0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  bool bVar6;
  longlong local_78;
  int *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined4 uStack_5c;
  longlong local_58;
  undefined1 local_50 [16];
  short local_40;
  ushort local_3e;
  ushort local_34;
  ushort local_32;
  int local_28 [4];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fd84e;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = uVar2;
  cVar1 = FUN_00428560(in_ECX[3],in_ECX[0xd],&local_40);
  if (cVar1 != '\0') {
    local_58 = 0;
    local_78 = 0;
    (**(code **)(*(int *)in_ECX[3] + 0x24))((int *)in_ECX[3],&local_58,&local_78,uVar2);
    if ((((char)in_ECX[0xe] != '\0') && (0 < param_1)) &&
       (local_58 = FUN_006f55df(), local_58 <= local_78)) {
      local_58 = local_78;
    }
    while( true ) {
      local_64 = (undefined4)((ulonglong)local_58 >> 0x20);
      if ((char)in_ECX[0xe] == '\0') {
        local_64 = 0;
        _local_60 = 0;
      }
      else {
        _local_60 = CONCAT44((int)local_58,local_60);
      }
      iVar3 = (**(code **)(*(int *)in_ECX[3] + 0xc))
                        (in_ECX[3],(char)in_ECX[0xe] != '\0',0x40000,local_58,uStack_5c,local_64,
                         &local_40,local_50);
      if (-1 < iVar3) {
        in_ECX[9] = (uint)local_3e;
        if (local_40 != -2) goto LAB_0042891c;
        piVar4 = local_28;
        piVar5 = &DAT_00c14370;
        uVar2 = 0xc;
        goto LAB_00428905;
      }
      if (iVar3 != -0x7776ffe7) break;
      local_68 = 0;
      iVar3 = (**(code **)(*(int *)in_ECX[3] + 0x10))((int *)in_ECX[3],&local_68);
      if (iVar3 < 0) break;
      piVar4 = (int *)in_ECX[3];
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      in_ECX[3] = 0;
      piVar4 = (int *)FUN_004284e0(&local_6c);
      local_8 = 0;
      piVar4 = (int *)*piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      piVar5 = (int *)in_ECX[3];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      in_ECX[3] = (int)piVar4;
      local_8 = 1;
      if (local_6c != (int *)0x0) {
        (**(code **)(*local_6c + 8))(local_6c);
      }
      local_8 = 0xffffffff;
      local_58 = FUN_006f55df();
    }
  }
  goto LAB_00428944;
LAB_0042891c:
  _local_60 = (uint5)(uint)local_60;
  goto LAB_00428920;
  while( true ) {
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    bVar6 = uVar2 < 4;
    uVar2 = uVar2 - 4;
    if (bVar6) break;
LAB_00428905:
    if (*piVar4 != *piVar5) goto LAB_0042891c;
  }
  _local_60 = CONCAT14(1,local_60);
LAB_00428920:
  in_ECX[0x1f] = (uint)(local_32 >> 3);
  in_ECX[0x20] = (uint)local_34;
  (**(code **)(*in_ECX + 4))(uStack_5c);
LAB_00428944:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

