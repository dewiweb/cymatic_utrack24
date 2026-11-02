// rea decompile_all
// name: __isindst_nolock
// address: 0x5b1d67
// body: available
// range: 0x5b1d67-0x5b1f3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __isindst_nolock
   
   Library: Visual Studio 2008 Release */

bool __isindst_nolock(void)

{
  bool bVar1;
  errno_t eVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_EDI;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  eVar2 = __get_daylight(&local_8);
  if (eVar2 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
    return false;
  }
  iVar5 = unaff_EDI[5];
  if ((iVar5 != DAT_00955c28) || (iVar5 != DAT_00955c34)) {
    if (DAT_0095ca1c == 0) {
      uVar4 = 2;
      local_c = 1;
      if (iVar5 < 0x6b) {
        uVar4 = 1;
        local_c = 5;
      }
      cvtdate(1,1,iVar5,uVar4,0,0,0,0,0);
      cvtdate(0,1,unaff_EDI[5],local_c,0,0,0,0,0);
    }
    else {
      if (DAT_0095ca08 != 0) {
        uVar7 = 0;
        uVar6 = 0;
        uVar8 = DAT_0095ca0e;
      }
      else {
        uVar7 = DAT_0095ca0c;
        uVar6 = DAT_0095ca0e;
        uVar8 = 0;
      }
      cvtdate(1,DAT_0095ca08 == 0,iVar5,uVar6,uVar7,uVar8,DAT_0095ca12,DAT_0095ca14,DAT_0095ca16);
      if (DAT_0095c9b4 != 0) {
        uVar7 = 0;
        uVar6 = 0;
        iVar5 = unaff_EDI[5];
        uVar8 = DAT_0095c9ba;
      }
      else {
        iVar5 = unaff_EDI[5];
        uVar7 = DAT_0095c9b8;
        uVar6 = DAT_0095c9ba;
        uVar8 = 0;
      }
      cvtdate(0,DAT_0095c9b4 == 0,iVar5,uVar6,uVar7,uVar8,DAT_0095c9be,DAT_0095c9c0,DAT_0095c9c2);
    }
  }
  iVar5 = unaff_EDI[7];
  if (DAT_00955c2c < DAT_00955c38) {
    if ((iVar5 < DAT_00955c2c) || (DAT_00955c38 < iVar5)) {
      return false;
    }
    if ((DAT_00955c2c < iVar5) && (iVar5 < DAT_00955c38)) {
      return true;
    }
  }
  else {
    if (iVar5 < DAT_00955c38) {
      return true;
    }
    if (DAT_00955c2c < iVar5) {
      return true;
    }
    if ((DAT_00955c38 < iVar5) && (iVar5 < DAT_00955c2c)) {
      return false;
    }
  }
  iVar3 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar5 == DAT_00955c2c) {
    bVar1 = DAT_00955c30 <= iVar3;
  }
  else {
    bVar1 = iVar3 < DAT_00955c3c;
  }
  return bVar1;
}

