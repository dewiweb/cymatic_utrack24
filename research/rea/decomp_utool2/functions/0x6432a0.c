// rea decompile_all
// name: FUN_006432a0
// address: 0x6432a0
// body: available
// range: 0x6432a0-0x6433ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006432a0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 **ppuVar5;
  int *piVar6;
  void *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  float local_34 [3];
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071fe11;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((char)in_ECX[6] == '\0') {
    if (*(int *)(*in_ECX + 8) == 0) {
      ppuVar5 = local_18;
      piVar6 = in_ECX;
      FUN_004681b0(ppuVar5);
      puVar4 = (undefined4 *)FUN_004682f0(ppuVar5,piVar6);
      uVar2 = *(undefined4 *)(*in_ECX + 8);
      *(undefined4 *)(*in_ECX + 8) = *puVar4;
      *puVar4 = uVar2;
      if (local_18[0] != (undefined4 *)0x0) {
        LOCK();
        piVar6 = local_18[0] + 1;
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_18[0])(1);
        }
      }
    }
    if (*(int **)(*in_ECX + 8) != (int *)0x0) {
      local_54 = (void *)0x0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      local_38 = 1;
      local_8 = 0;
      (**(code **)(**(int **)(*in_ECX + 8) + 0x1c))(in_ECX[2],&local_54,uVar3);
      local_34[1] = 0.0;
      local_28 = 0;
      local_24 = *(float *)(*in_ECX + 0x14);
      local_34[0] = *(float *)(*in_ECX + 0x18) * local_24;
      local_34[2] = (float)in_ECX[3] + 0.0;
      local_20 = (float)in_ECX[4] + 0.0;
      FUN_0067b1f0(&local_54,local_34);
      FID_conflict__free(local_54);
    }
  }
  ExceptionList = local_10;
  return;
}

