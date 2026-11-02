// rea decompile_all
// name: FUN_006ccad0
// address: 0x6ccad0
// body: available
// range: 0x6ccad0-0x6ccbef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ccad0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *in_ECX;
  undefined4 uVar7;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726671;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(byte *)(in_ECX + 0x1a) & 1) != 0) {
    if (DAT_00c8a67c == 0) {
      local_14 = operator_new(0xd0);
      local_8 = 0;
      DAT_00c8a67c = FUN_006cb960();
    }
    local_8 = 0xffffffff;
    FUN_006cb570(in_ECX);
  }
  puVar5 = (undefined4 *)FUN_0040de70(in_ECX);
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    puVar5[1] = puVar5[1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  local_14 = puVar5;
  (**(code **)(*in_ECX + 0x94))(uVar4);
  if (puVar5 != (undefined4 *)0x0) {
    if (puVar5[2] != 0) {
      FUN_004b0b00(&local_14,FUN_00410543,in_ECX);
      if (local_14 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      if ((local_14[2] != 0) && (piVar6 = (int *)FUN_006cecc0(), piVar6 != (int *)0x0)) {
        piVar3 = (int *)piVar6[3];
        while (piVar2 = piVar3, piVar2 != (int *)0x0) {
          piVar6 = piVar2;
          piVar3 = (int *)piVar2[3];
        }
        piVar3 = (int *)in_ECX[3];
        while (piVar2 = piVar3, piVar2 != (int *)0x0) {
          in_ECX = piVar2;
          piVar3 = (int *)piVar2[3];
        }
        if (piVar6 != in_ECX) {
          uVar7 = 0;
          FUN_0048c530(0);
          FUN_006ca2a0(uVar7);
        }
      }
    }
    LOCK();
    piVar6 = local_14 + 1;
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

