// rea decompile_all
// name: FUN_006f1ef0
// address: 0x6f1ef0
// body: available
// range: 0x6f1ef0-0x6f2056 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f1ef0(undefined4 param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  _locale_t unaff_EDI;
  int local_1c [4];
  char local_c;
  uint local_8;
  
  local_8 = 0;
  FUN_006f2e00(param_1);
  while( true ) {
    if (((uint)param_3[2] < (uint)((int *)*param_3)[2]) &&
       (*(int *)(*(int *)*param_3 + param_3[2] * 4) != 0)) {
      FUN_0044ebd0(param_3[3]);
      iVar2 = FUN_00426f70();
    }
    else {
      iVar2 = 0;
    }
    iVar3 = FID_conflict__iswalnum((wint_t)iVar2,unaff_EDI);
    if (((iVar3 == 0) && (iVar2 != 0x2e)) && (iVar2 != 0x5f)) break;
    iVar2 = 1;
    FUN_006f2c40(param_3[1]);
    if (param_3[2] < ((int *)*param_3)[2]) {
      iVar3 = *(int *)(*(int *)*param_3 + param_3[2] * 4);
      if ((param_3[3] + 1 < *(int *)(iVar3 + 8)) && (*(int *)(iVar3 + 0xc) + 1 <= param_3[3] + 1)) {
        iVar2 = 2;
      }
    }
    FUN_006f2c40(param_3[1] + iVar2);
  }
  FUN_006f2e00(param_3);
  uVar5 = local_8;
  do {
    if (*(int *)(param_2 + 0xc) < 1) {
LAB_006f200e:
      bVar1 = false;
    }
    else {
      uVar5 = uVar5 | 1;
      piVar4 = (int *)FUN_006f2b80(local_1c,0xffffffff);
      if (((uint)piVar4[2] < (uint)((int *)*piVar4)[2]) &&
         (*(int *)(*(int *)*piVar4 + piVar4[2] * 4) != 0)) {
        FUN_0044ebd0(piVar4[3]);
        iVar2 = FUN_00426f70();
      }
      else {
        iVar2 = 0;
      }
      iVar3 = FID_conflict__iswalnum((wint_t)iVar2,unaff_EDI);
      if (((iVar3 == 0) && (iVar2 != 0x2e)) && (iVar2 != 0x5f)) goto LAB_006f200e;
      bVar1 = true;
    }
    if ((((uVar5 & 1) != 0) && (uVar5 = 0, local_c != '\0')) && (local_c = '\0', local_1c[0] != 0))
    {
      FUN_00415ff0(local_1c);
    }
    if (!bVar1) {
      return;
    }
    FUN_006f2c40(*(int *)(param_2 + 4) + -1);
  } while( true );
}

