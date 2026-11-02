// rea decompile_all
// name: _AfxMultMultDivDiv
// address: 0x100f31fd
// body: available
// range: 0x100f31fd-0x100f331f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    long __stdcall _AfxMultMultDivDiv(int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

long _AfxMultMultDivDiv(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint local_c;
  int local_8;
  
  lVar12 = (longlong)param_2 * (longlong)param_3;
  uVar6 = (uint)((ulonglong)lVar12 >> 0x20);
  uVar3 = (uint)lVar12;
  lVar1 = (longlong)param_4 * (longlong)param_5;
  iVar7 = (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (int)uVar6 >> 0x1f;
  iVar4 = ((uVar6 ^ uVar8) - uVar8) - (uint)((uVar3 ^ uVar8) < uVar8);
  iVar10 = 0;
  for (uVar8 = (uVar3 ^ uVar8) - uVar8; uVar8 != 0 || iVar4 != 0; uVar8 = uVar8 >> 1 | uVar2) {
    uVar2 = iVar4 << 0x1f;
    iVar4 = iVar4 >> 1;
    iVar10 = iVar10 + 1;
  }
  uVar8 = (param_1 ^ param_1 >> 0x1f) - (param_1 >> 0x1f);
  param_2 = 0;
  iVar4 = (int)uVar8 >> 0x1f;
  for (; uVar8 != 0 || iVar4 != 0; uVar8 = uVar8 >> 1 | uVar2) {
    uVar2 = iVar4 << 0x1f;
    iVar4 = iVar4 >> 1;
    param_2 = param_2 + 1;
  }
  iVar10 = iVar10 + param_2;
  if ((iVar7 == 0 || lVar1 < 0) && (lVar1 < 0)) {
    lVar1 = CONCAT44(-(iVar7 + (uint)((int)lVar1 != 0)),-(int)lVar1);
    lVar12 = CONCAT44(-(uVar6 + (uVar3 != 0)),-uVar3);
  }
  while( true ) {
    iVar4 = (int)((ulonglong)lVar1 >> 0x20);
    lVar13 = lVar12;
    if (iVar10 < 0x20) break;
    lVar13 = lVar12 >> 1;
    lVar1 = lVar1 >> 1;
    if (iVar10 + -1 < 0x20) break;
    uVar3 = (uint)lVar13 >> 1 | (int)((ulonglong)lVar13 >> 0x20) << 0x1f;
    uVar8 = (uint)lVar1 >> 1 | (int)((ulonglong)lVar1 >> 0x20) << 0x1f;
    iVar9 = (int)(lVar12 >> 0x22);
    iVar11 = iVar4 >> 2;
    lVar1 = CONCAT44(iVar11,uVar8);
    iVar7 = iVar10 + -2;
    iVar10 = iVar10 + -3;
    lVar13 = CONCAT44(iVar9,uVar3);
    lVar12 = CONCAT44(iVar9,uVar3);
    if (iVar7 < 0x20) break;
    param_1 = param_1 >> 1;
    lVar1 = CONCAT44(iVar4 >> 3,uVar8 >> 1 | iVar11 << 0x1f);
  }
  local_c = (uint)lVar13;
  lVar12 = __allmul(param_1,param_1 >> 0x1f,local_c,(int)((ulonglong)lVar13 >> 0x20));
  if (lVar1 == 0) {
    if (((int)((ulonglong)lVar12 >> 0x20) != 0 && -1 < lVar12) || (-1 < lVar12)) {
      lVar5 = 0x7fffffff;
    }
    else {
      lVar5 = -0x80000000;
    }
  }
  else {
    uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar13 = __alldiv((uint)lVar1,uVar3,2,0);
    uVar14 = __alldiv((uint)(lVar12 + lVar13),(uint)((ulonglong)(lVar12 + lVar13) >> 0x20),
                      (uint)lVar1,uVar3);
    lVar5 = (long)uVar14;
  }
  return lVar5;
}

