// rea decompile_all
// name: FUN_006cc240
// address: 0x6cc240
// body: available
// range: 0x6cc240-0x6cc308 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cc240(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072652d;
  local_10 = ExceptionList;
  uStack_28 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uStack_30 = 0x6cc277;
    puVar4 = (undefined4 *)FUN_0040de70();
  }
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    puVar4[1] = puVar4[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (*(code **)(*in_ECX + 0x54) == FUN_00410480) {
    FUN_006e6400(auStack_38);
    FUN_006ce9f0(1);
  }
  else {
    uStack_2c = 0x6cc2b3;
    (**(code **)(*in_ECX + 0x54))();
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (puVar4[2] != 0) {
      uVar3 = in_ECX[0xc];
      do {
        do {
          uVar3 = uVar3 - 1;
          if ((int)uVar3 < 0) goto LAB_006cc2e4;
        } while (((uint)in_ECX[0xc] <= uVar3) || (*(int *)(in_ECX[10] + uVar3 * 4) == 0));
        uStack_2c = 0x6cc2d9;
        FUN_006cc240();
      } while (puVar4[2] != 0);
    }
LAB_006cc2e4:
    LOCK();
    piVar1 = puVar4 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uStack_2c = 1;
      uStack_30 = 0x6cc2f7;
      (**(code **)*puVar4)();
    }
  }
  ExceptionList = local_10;
  return;
}

