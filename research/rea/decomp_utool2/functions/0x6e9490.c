// rea decompile_all
// name: FUN_006e9490
// address: 0x6e9490
// body: available
// range: 0x6e9490-0x6e9561 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e9490(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728d68;
  local_10 = ExceptionList;
  uStack_28 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX == (int *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uStack_30 = 0x6e94c7;
    puVar3 = (undefined4 *)FUN_0040de70();
  }
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  FUN_006e6400(auStack_38);
  FUN_006ce9f0(1);
  uStack_2c = 0x6e94fa;
  (**(code **)(*in_ECX + 0x4c))();
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[2] != 0) {
      uStack_2c = 0x6e950e;
      (**(code **)(*in_ECX + 0xa4))();
      if (puVar3[2] != 0) {
        iVar2 = in_ECX[0xc];
        while (iVar2 = iVar2 + -1, -1 < iVar2) {
          uStack_2c = 0x6e952b;
          FUN_006e9490();
          if (puVar3[2] == 0) break;
          if (in_ECX[0xc] < iVar2) {
            iVar2 = in_ECX[0xc];
          }
        }
      }
    }
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uStack_2c = 1;
      uStack_30 = 0x6e9550;
      (**(code **)*puVar3)();
    }
  }
  ExceptionList = local_10;
  return;
}

