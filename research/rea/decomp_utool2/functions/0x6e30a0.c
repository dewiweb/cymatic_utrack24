// rea decompile_all
// name: FUN_006e30a0
// address: 0x6e30a0
// body: available
// range: 0x6e30a0-0x6e31ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e30a0(float *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  float *pfVar4;
  int in_ECX;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined1 *puVar8;
  undefined1 local_28 [16];
  undefined1 local_18 [20];
  
  iVar1 = *(int *)(in_ECX + 0xc0);
  if (*(char *)((int)param_1[0xc] + 0xc) == '\0') {
    fVar7 = *param_1;
    puVar8 = local_28;
    fVar6 = param_1[1];
    FUN_006e6400(local_18);
    pfVar4 = (float *)FUN_0040e4d0(puVar8);
    if ((((fVar7 < *pfVar4) || (fVar6 < pfVar4[1])) || (pfVar4[2] + *pfVar4 <= fVar7)) ||
       (pfVar4[3] + pfVar4[1] <= fVar6)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  else {
    cVar2 = FUN_006cc060(0);
  }
  uVar5 = 0;
  if ((*(byte *)(in_ECX + 0x69) & 0x10) == 0) {
    if (*(int *)(in_ECX + 0xc) != 0) {
      cVar3 = FUN_006e6320();
      if (cVar3 == '\0') goto LAB_006e3173;
    }
    if ((*(byte *)(in_ECX + 0x68) & 2) != 0) {
      cVar3 = FUN_006ceda0();
      if ((cVar3 == '\0') &&
         (((cVar2 != '\0' || ((*(char *)(in_ECX + 0xdd) != '\0' && (*(int *)(in_ECX + 0xc0) == 2))))
          || (*(char *)(in_ECX + 0xdc) != '\0')))) {
        uVar5 = 2;
      }
    }
  }
LAB_006e3173:
  FUN_006c8640(uVar5);
  if (((-1 < *(int *)(in_ECX + 0xa8)) && (*(int *)(in_ECX + 0xc0) != iVar1)) &&
     (*(int *)(in_ECX + 0xc0) == 2)) {
    FUN_0063eb10(*(undefined4 *)(in_ECX + 0xac));
  }
  return;
}

