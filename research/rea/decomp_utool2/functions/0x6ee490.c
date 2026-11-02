// rea decompile_all
// name: FUN_006ee490
// address: 0x6ee490
// body: available
// range: 0x6ee490-0x6ee60f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006ee490(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int *in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729336;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar3 = FUN_004b6550(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (cVar3 == '\0') {
    if ((char)in_ECX[0x29] != '\0') {
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = *param_1;
    if (((iVar1 == 9) && ((*(byte *)(param_1 + 1) & 7) == 0)) || (param_1[2] == 9)) {
      (**(code **)(*in_ECX + 0xc0))();
    }
    else if ((iVar1 == 0xd) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      (**(code **)(*in_ECX + 0xbc))();
    }
    else if ((iVar1 == 0x1b) && ((*(byte *)(param_1 + 1) & 7) == 0)) {
      (**(code **)(*in_ECX + 0xc4))();
    }
    else {
      local_1c = 0x5b;
      local_18 = 2;
      local_14 = 0;
      cVar3 = FUN_006e5ec0(&local_1c);
      if (cVar3 == '\0') {
        local_1c = 0x5d;
        local_18 = 2;
        local_14 = 0;
        cVar3 = FUN_006e5ec0(&local_1c);
        if (cVar3 == '\0') {
          if ((uint)param_1[2] < 0x20) {
            ExceptionList = local_10;
            return 0;
          }
          uVar4 = FUN_00622070();
          local_8 = 0;
          (**(code **)(in_ECX[0x1e] + 0x18))(uVar4);
          local_8 = 0xffffffff;
          FUN_00637c10();
        }
        else {
          FUN_006efcf0(in_ECX[0x22]);
        }
      }
      else {
        FUN_006efcf0(-in_ECX[0x22]);
      }
    }
  }
  iVar2 = in_ECX[0xbd];
  piVar5 = (int *)(*(int *)(iVar2 + 0x18) + 0xc);
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = 0;
  UNLOCK();
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x14) + 4))();
  }
  ExceptionList = local_10;
  return 1;
}

