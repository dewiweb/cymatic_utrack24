// rea decompile_all
// name: FUN_0040b580
// address: 0x40b580
// body: available
// range: 0x40b580-0x40b682 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0040b580(void)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int in_ECX;
  undefined1 auStack_a4 [4];
  undefined4 uStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  int local_84 [26];
  byte local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc408;
  local_10 = ExceptionList;
  uStack_94 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar1 = *(int **)(*(int *)(in_ECX + 0x88) + 0x98);
  if (piVar1 != (int *)0x0) {
    uStack_98 = 0x40b5c3;
    ExceptionList = &local_10;
    FUN_006ea2c0();
    local_8 = 0;
    if ((local_1c & 4) == 0) {
      bVar3 = local_1c | 4;
      bVar2 = local_1c & 1;
      local_1c = bVar3;
      if (bVar2 != 0) {
        uStack_98 = 0x40b5df;
        iVar6 = FUN_0068db10();
        if (iVar6 != 0) {
          uStack_98 = 0;
          piStack_9c = *(int **)(iVar6 + 8);
          uStack_a0 = 0x40b5f1;
          (**(code **)(local_84[0] + 0x30))();
        }
      }
      FUN_006e6400(auStack_a4);
      FUN_006ce9f0(1);
    }
    uStack_98 = 0;
    piStack_9c = (int *)0x0;
    uStack_a0 = 0x40b613;
    FUN_006e9aa0();
    uStack_98 = 0;
    piStack_9c = (int *)0x40b61d;
    cVar4 = FUN_006d1aa0();
    if (cVar4 == '\0') {
      uStack_98 = 0x40b626;
      FUN_0048c530();
      uStack_98 = 0;
      piStack_9c = local_84;
      uStack_a0 = 0x40b633;
      FUN_006ca6c0();
      uStack_98 = 1;
      piStack_9c = (int *)0x40b63e;
      (**(code **)(local_84[0] + 0x28))();
      uStack_98 = 1;
      piStack_9c = (int *)0x2;
      uStack_a0 = 0x40b64a;
      FUN_006cc500();
    }
    uStack_98 = 0x40b653;
    uVar5 = (**(code **)(*piVar1 + 0x54))();
    uStack_98 = 0x40b65d;
    FUN_006ea0b0();
    ExceptionList = local_10;
    return uVar5;
  }
  return 0;
}

