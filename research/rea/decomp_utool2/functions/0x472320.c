// rea decompile_all
// name: FUN_00472320
// address: 0x472320
// body: available
// range: 0x472320-0x4723f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00472320(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  undefined4 *local_8;
  
  iVar6 = 0;
  if (0 < *(int *)(in_ECX + 0xc)) {
    do {
      piVar5 = (int *)FUN_004179c0(&local_8,iVar6);
      iVar2 = *piVar5;
      if (local_8 != (undefined4 *)0x0) {
        LOCK();
        piVar5 = local_8 + 1;
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_8)(1);
        }
      }
      if (*(int *)(iVar2 + 0x10) == param_2) {
        iVar1 = *(int *)(iVar2 + 8);
        iVar3 = *param_1;
        if ((iVar1 == iVar3) ||
           ((((*(float *)(iVar1 + 0x14) == *(float *)(iVar3 + 0x14) &&
              (*(char *)(iVar1 + 0x24) == *(char *)(iVar3 + 0x24))) &&
             (*(float *)(iVar1 + 0x18) == *(float *)(iVar3 + 0x18))) &&
            (((*(float *)(iVar1 + 0x1c) == *(float *)(iVar3 + 0x1c) &&
              (cVar4 = FUN_006356b0(), cVar4 != '\0')) && (cVar4 = FUN_006356b0(), cVar4 != '\0'))))
           )) {
          return iVar2;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0xc));
  }
  return 0;
}

