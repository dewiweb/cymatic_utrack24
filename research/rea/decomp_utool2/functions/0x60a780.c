// rea decompile_all
// name: FUN_0060a780
// address: 0x60a780
// body: available
// range: 0x60a780-0x60a840 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0060a780(int param_1)

{
  int iVar1;
  uint in_EAX;
  int *piVar2;
  int iVar3;
  uint extraout_EAX;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  uint local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar5 = 0;
  local_10 = in_ECX;
  if (0 < in_ECX[2]) {
    do {
      piVar2 = (int *)(**(code **)(**(int **)(*in_ECX + iVar5 * 4) + 4))(&local_14);
      iVar6 = *(int *)(param_1 + 8);
      iVar1 = *piVar2;
      if (*piVar2 == *(int *)(param_1 + 8)) {
        iVar6 = 0;
      }
      else {
        do {
          local_8 = iVar1;
          local_c = iVar6;
          iVar3 = FUN_00443260();
          iVar6 = FUN_00443260();
          in_ECX = local_10;
          if ((iVar3 - iVar6 != 0) &&
             (iVar6 = (iVar3 - iVar6 >> 0x1f & 0xfffffffeU) + 1, iVar6 != 0)) goto LAB_0060a7f0;
          iVar6 = local_c;
          iVar1 = local_8;
        } while (iVar3 != 0);
        iVar6 = 0;
      }
LAB_0060a7f0:
      piVar2 = (int *)(local_14 - 8);
      in_EAX = local_14;
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        in_EAX = iVar1 - 1;
        if (in_EAX == 0xffffffff) {
          FID_conflict__free(piVar2);
          in_EAX = extraout_EAX;
        }
      }
      if (iVar6 == 0) {
        uVar4 = (**(code **)(**(int **)(*in_ECX + iVar5 * 4) + 0x18))(param_1);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_ECX[2]);
  }
  return in_EAX & 0xffffff00;
}

